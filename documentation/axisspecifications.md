IMAGE OF AXIS

Each axis on Splicer is identified by a letter, a joint number, and a step generator (step-gen) number. The joint and step-gen numbers are primarily relevant during initial configuration or for debugging purposes. They are included here solely for the sake of completeness. The axis letters follow standard CNC axis naming conventions (A, B, C, X, Y, Z, U, V, W) and cannot be arbitrarily assigned.  
Special cases include axes Z, A, and B. In software, axis Z simultaneously controls two physical motors on the machine. Axes A and B in software control two motors via a CoreXY kinematic translation. The corresponding physical axes are also labeled A and B; however, they do not correspond to software axes A and B. This distinction is only relevant during the configuration of Splicer. Although the naming scheme is suboptimal, it cannot be changed due to the constraints of the CNC axis naming convention. However, this has no impact during normal operation.



### **X Axis**

**Joint**: 0  
**Step-gen**: 5

From the perspective of the lens, axis **X** controls the left-to-right movement of the sample. Its origin is aligned with the optical centerline of the lens. Negative values move the sample to the left, while positive values move it to the right.

### **Y Axis**

**Joint**: 1  
**Step-gen**: 6

From the perspective of the lens, axis **Y** controls the distance to the sample. Its origin is located at the lens board of Splicer. Smaller values position the sample closer to the lens, while larger values move it farther away. The Y axis corresponds to the depth dimension in the captured image.

### **Z Axis**

**Joint**: 2  
**Step-gen**: 7

From the perspective of the lens, axis **Z** controls the vertical position (height) of the sample. Its origin lies along the optical centerline of the lens, at the top side of the sample post. Negative values position the camera below the sample; positive values position it above. When the line sensor is in vertical orientation (`U = 0`), the Z axis corresponds to the vertical position of the sample in the captured image.



**Axis A**
Joint 6, step-gen 1

Axis A is controlling the B Motor of the 