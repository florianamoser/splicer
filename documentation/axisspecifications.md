IMAGE OF AXIS

Each axis on Splicer is identified by a letter, a joint number, and a step generator (step-gen) number. The joint and step-gen numbers are primarily relevant during initial configuration or for debugging purposes. They are included here solely for the sake of completeness. The axis letters follow standard CNC axis naming conventions (A, B, C, X, Y, Z, U, V, W) and cannot be arbitrarily assigned.  
Special cases include axes Z, A, and B. In software, axis Z simultaneously controls two physical motors on the machine. Axes A and B in software control two motors via a CoreXY kinematic translation. The corresponding physical axes are also labeled A and B; however, they do not correspond to software axes A and B. This distinction is only relevant during the configuration of Splicer. Although the naming scheme is suboptimal, it cannot be changed due to the constraints of the CNC axis naming convention. However, this has no impact during normal operation.



### **X-Axis**

    **Joint**: 0  
    **Step-gen**: 5  
    **Units**: [mm]  
    **Min. Value**:  
    **Max. Value**:  

From the perspective of the lens, axis **X** controls the left-to-right movement of the sample. Its origin is aligned with the optical centerline of the lens. Negative values move the sample to the left, while positive values move it to the right.

### **Y-Axis**

**Joint**: 1  
**Step-gen**: 6

From the perspective of the lens, axis **Y** controls the distance to the sample. Its origin is located at the lens board of Splicer. Smaller values position the sample closer to the lens, while larger values move it farther away. The Y axis corresponds to the depth dimension in the captured image.

### **Z-Axis**

**Z-Motor Right**
**Joint**: 2  
**Step-gen**: 7

**Z-Motor Left**
**Joint**: 3  
**Step-gen**: 8

From the perspective of the lens, axis **Z** controls the vertical position (height) of the sample. Its origin lies along the optical centerline of the lens, at the top side of the sample post. Negative values position the camera below the sample; positive values position it above. When the line sensor is in vertical orientation (`U = 0`), the Z axis corresponds to the vertical position of the sample in the captured image.

### **C-Axis**

**Joint**: 4  
**Step-gen**: 4
**Unit**: Degrees

From the perspective of the lens, axis **C** controls the rotation of the sample around the vertical axis. Positive values rotate the sample clockwise; negative values rotate it counterclockwise.

### **V-Axis**

**Joint**: 5  
**Step-gen**: 0
**Unit**: mm

Axis **V** controls the autofocus mechanism of Splicer.

Its origin is located at the lens board of Splicer. Smaller values move the sensor closer to the lens, shifting the focus toward infinity. Larger values move the sensor farther from the lens, shifting the focus closer.

The classic rule of thumb from large format photography applies here as well:
- At infinity focus, the focus distance is equal to the **focal length** of the lens.
- At 1:1 magnification (where the projected image size matches the object size), the focus distance equals **2× the focal length**.

In typical use, axis **V** is set automatically by the `splicer-animator` script at export and does not require manual control. The value of **V** is determined by the `Y-axis` and the `focus-offset` parameter defined in the `splicer-animator` for the corresponding line.


