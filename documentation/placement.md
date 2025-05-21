Before Splicer can be operated, it must be physically placed, leveled, mechanically integrated, and electronically initialized. Due to its modular design and sensitivity to optical alignment, careful placement and calibration are essential to ensure consistent imaging results and to prevent mechanical or optical misalignment during operation. This chapter outlines the required steps and reference points, following the established [naming conventions](https://documentation.splicer.camera/namingconventions/).

# Placement and Leveling of the Machine Step-by-Step Setup Procedure

## 1. **Position the Camera Tower**

The **Camera Tower** is the structural core of Splicer. It houses the **Splicer Camera Module v2** and defines the origin of the optical coordinate system via the **Lensboard**.

* Move the Camera Tower to its final position within the studio.
* Ensure a clearance of at least 1 meter (recommended: 2 meters) around the machine for safe access and operation.
* Use the **leveling feet** located at the base of the Camera Tower to level the structure. A **bubble level** placed across the top of the camera module is recommended for reference.
* This structure must be precisely leveled before any connection to the Sample Mover to ensure alignment across axes.

## 2. **Attach and Align the Sample Mover**

The **Sample Mover** is mechanically and electronically coupled to the Camera Tower and supports the motion system along the **X**, **Y** and **C** axes.

* Mechanically connect the Sample Mover to the Camera Tower at the base of the tower.
* Secure the connection using the two **M6 screws**.
* Visually align and level the Sample Mover as accurately as possible by eye. Final leveling adjustments will be made after system initialization.
* Connect the **48 V power supply** and all required **data and signal cables** to the Sample Mover’s X, Y, and C motors and endstops.

## 3. **System Initialization and Homing**

* Power on the main system and the CNC motion control computer.
* Launch **LinuxCNC** and **home all axes** via the control interface.
* Closely monitor the homing sequence to avoid collisions or drag chain interference. Confirm that axes reach their home positions without abnormal vibration or resistance.

## 4. **Verify Optical Alignment Using the Guideline Laser**

Splicer includes a **Guideline Laser**, precisely mounted to the **Lensboard**, for quick verification of spatial alignment along the **optical axis**.

* Switch on the Guideline Laser.
* Move the **Toolpost** along the **Y-Axis** from **Ymin** to **Ymax**.
* With the **Z-Axis** at **Z = 0**, the **top surface of the Toolpost** should remain aligned with the **center of the optical axis** throughout the entire Y-range.
* Simultaneously verify that **X = 0** maintains a consistent position **along the optical axis** for the entire length of the Y-Axis.
* If misalignments occur, re-adjust the Sample Mover’s leveling or mounting angle and repeat the laser check.

> **Important**: Any repositioning of either the Camera Tower or the Sample Mover invalidates the previous focus calibration. After every physical move or disconnection, **the focus system (V-Axis)** must be **recalibrated** using a reference sample and confirmed via test captures and the new focus function needs to be added to the [Splicer Animator GCODE script](https://documentation.splicer.camera/building-gcode/).
