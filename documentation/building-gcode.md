Splicer is controlled using a GCODE file, a standard machine control language commonly used in CNC systems. The GCODE is executed line by line, with each line representing a specific movement, control instruction, or signal trigger. The combination of spatial movement and signal commands forms the basis of Splicer’s image acquisition.

### Basic Control Structure

Splicer interprets GCODE through a LinuxCNC-based controller, which interfaces with the machine’s hardware via a Mesa motion control board. Custom motion paths are generated using the [Splicer Animator](https://documentation.splicer.camera/splicer-animator/) Script in Blender, which exports Blender animations as GCODE sequences.

[Click here for current release of the splicer-animator](https://github.com/florianamoser/splicer/tree/main/software/animator)

---

### Key GCODE Commands

| Command   | Function                                                                 |
|-----------|--------------------------------------------------------------------------|
| `M100`    | **Triggers frame capture** — instructs the camera system to record a line |
| `M62 Pn`  | **Sets digital output pin `n` ON** on the Mesa 7i96                      |
| `M63 Pn`  | **Sets digital output pin `n` OFF** on the Mesa 7i96                     |

Each rising and falling edge of the output signal is interpreted as one discrete line trigger by the image capture system.

### G93 Inverse Feedrate Mode

Splicer operates in `G93` Inverse Time Feedrate Mode, which interprets feedrate (`F`) as the reciprocal of the duration in minutes for executing a given GCODE move. In other words, `F` defines how many such moves would occur in one minute, and the time taken for each move is calculated as `T = 1 / F` (in minutes). This mode is essential for synchronizing motion with image acquisition: rather than going as fast as possible, `F` controls the exact duration of the move, allowing precise control over line trigger timing during sampling. Accurate timing is critical to avoid overloading the framegrabber. Triggering lines too quickly can exceed the frequency of the acquisition system, resulting in dropped lines. On the other hand, acquiring lines too slowly leads to unnecessarily long iteration times during image capture.


### Blender GCODE Export Script

This Python script is used to export a motion animation from Blender into machine-readable GCODE for Splicer. It generates a `.ngc` file based on animated object movement, camera parameters, and output pin triggers, using `G93` inverse feedrate for precise timing.

#### File & Capture Setup

```python
import bpy
import math
from datetime import datetime

name = "ProjectName"
debug = False

path = "/Users/florianamoser/splicer_sync/"
date = datetime.now().strftime("%y%m%d")
date_time = datetime.now().strftime("%Y-%m-%d, %H:%M:%S")
filetype = ".ngc"
feedrate = "F5000"
autofocus = True
color_selected = "a"
exposure_time = 3200  # µs

name = f"{date}_{name}_{bpy.context.scene.frame_start}-{bpy.context.scene.frame_end}"
```

#### Blender Object References

```python
obj = bpy.data.objects["Sample"]
obj_cam = bpy.data.objects["Camera"]
cam = bpy.data.cameras["Camera"]
```

---

#### GCODE File Header

```python
outF = open(path + name + filetype, "w")
outF.write("%\n")
outF.write(f"({date_time}, Florian Amoser)\n")
outF.write("(This is machine specific gcode for SPLICER)\n")
outF.write(f"({name + filetype})\n")
outF.write(f"(linenumbers: {bpy.context.scene.frame_end - bpy.context.scene.frame_start})\n")
outF.write(f"(color: {color_selected})\n")
outF.write(f"(exposure time: {exposure_time}μs)\n")
outF.write("G90 G17\nG21\nG01 " + feedrate + "\n")
```

#### Move to Starting Position + Trigger

```python
bpy.context.scene.frame_set(bpy.context.scene.frame_start)

outF.write("G0 X... Y... Z... A... B... C... U...\n")  # Initial move command
outF.write("M100\n")  # Start external trigger
```

---

#### Frame-by-Frame Motion Export

Each frame is read from the Blender animation and translated into spatial coordinates, then written as a G-code line with:

- `G93 G1` motion block
- `F...` inverse feedrate
- `M62 P0` or `M63 P0` line trigger pulse
- `X Y Z A B C U V` axis positions (only if changed from previous)


---

#### Autofocus Calculation (Polynomial Fit)

> More on this in the autofocus calibration chapter. 

```python
pos["v"] = round(
    (361.142 - 2.44684 * fy + 0.00897864 * fy**2 
    - 0.0000177572 * fy**3 + 0.0000000195082 * fy**4 
    - 1.11954E-11 * fy**5 + 2.61487E-15 * fy**6), 3)
```

Where `fy = pos["y"] + pos["focus_offset"]`.

---

#### Inverse Feedrate Timing

GCODE uses `G93` mode, Feedrate is set with:

  ```python
  outF.write(" F20000")
  ```

This defines the move time as `1 / (20000 / 60)` minutes.

---

#### End-of-File

Return to start position and write G-code footer:

```python
outF.write("G0 X... Y... Z... A... B... C... U...\n")
outF.write("%")
outF.close()
print(date_time + " exported: " + name + filetype)
```

---

This script forms the core of Splicer's time-based motion programming and is integral to coordinating physical sampling with the framegrabber's triggering logic. To learn how to use it refer to the chapter [Splicer Animator](https://documentation.splicer.camera/splicer-animator/).
