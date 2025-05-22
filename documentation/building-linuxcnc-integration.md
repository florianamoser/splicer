Splicer uses LinuxCNC for motion control. This chapter provides an overview of how the machine is defined and operated through the `splicer.ini` configuration file. The `.ini` file describes axis definitions, joint mappings, kinematics, HAL files, timing, and IO assignments.

The full LinuxCNC configuration for Splicer is available on GitHub:  
[Splicer LinuxCNC Config Repository](https://github.com/florianamoser/splicer/tree/main/software/linux-cnc-config)

---

## splicer.ini Overview

```ini
DRIVER = hm2_eth
IPADDRESS = "10.10.10.10"
BOARD = 7i96
STEPGENS = 9
```

Splicer uses a Mesa 7i96 board over Ethernet (`hm2_eth`) with a daisychained 7i78 for a total of 9 step generators (1 per joint). 

---

### `[KINS]`

```ini
KINEMATICS = trivkins coordinates=XYZZCVBAU
JOINTS = 9
```

Splicer mostly uses trivial kinematics, with the exception of axis A und B that go through a HAL CoreXY conversion and Z that is driven by two joints / motors.

---

### Axis Configuration

Each axis has:

* MIN / MAX limits in mm or degrees
* Velocity and acceleration
* PID and stepgen tuning
* Homing logic

Example:

#### `[AXIS_N]`

```ini
MIN_LIMIT = -254
MAX_LIMIT = 254
MAX_VELOCITY = 200
MAX_ACCELERATION = 400
```

Defines limits and motion constraints for the X axis.

---

### Joint Configuration

Splicer has 9 joints, each tied to a unique physical axis:

* `JOINT_0`: X (lateral sample movement) 
* `JOINT_1`: Y (depth sample movement)
* `JOINT_2` to `JOINT_3`: Z Lift (dual motors)
* `JOINT_4`: C (rotation of sample)
* `JOINT_5`: V (focus rail)
* `JOINT_6`: B (vertical optical shift, coreXY)
* `JOINT_7`: A (horizontal optical shift, coreXY)
* `JOINT_8`: U (sensor rotation)

#### Kinematics: CoreXY (A and B Axis) & Z-Split

The CoreXY kinematic conversion of A and B axis is handled via:

```ini
HALFILE = corexy_by_hal.hal
```

This HAL file handles the translation from `A/B` movement to the AB-motor configuration typical of CoreXY machines. The dual-Z motor setup (`Z0` and `Z1`) allows synchronized lifting of the camera platform.

---

## Inputs & Outputs

### `[INPUTS]`

```ini
INPUT_0 = Home
INPUT_JOINT_0 = 0
...
INPUT_8 = Home
INPUT_JOINT_8 = 8
```

Maps home switches to individual joints.

### `[OUTPUTS]`

```ini
OUTPUT_0 = Digital Out 0
OUTPUT_1 = Digital Out 1
```

Outputs are used to trigger external systems (M62/M63 line triggers to the framegrabber).

---

## Important Notes

* Servo period and step timings (`STEPLEN`, `STEPSPACE`, etc.) need to be tuned for the specific stepper drivers used in Splicer.
* Inverse time feedrate (`G93`) is used during capture (see G-code specs), requiring stable timing and precision movement synchronization.
* Homing sequence is designed to prevent axis collisions. Do only change if you know what you are doing.

---

## Development Status

The LinuxCNC integration of Splicer is fully functional and has been tested in live capture. The configuration is modular, and each HAL file corresponds to a subsystem (motion, CoreXY translation, IO extensions).
