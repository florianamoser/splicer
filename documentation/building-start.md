This following series of articles is intended to provide sufficient information to build, understand, or repair Splicer. It is not a step-by-step assembly guide, though such a manual may eventually be developed. Instead, the technical documentation focuses on specific and critical aspects of the apparatus.

The documentation assumes a degree of prior knowledge: a technically inclined person, familiar with CNC systems, electronics, basics in software and photography, should be able to reconstruct or troubleshoot Splicer based on the information provided. 

# Warnings / Caution
Splicer is an open machine by design — physically and conceptually. This openness fosters transparency but also introduces risk. Please read the following cautions carefully before beginning assembly or operation.

## High Voltage Warning
The system includes 220V cabling. Always disconnect mains power before performing any electrical work. Never touch live wires or the controller area when connected to power.

## Mechanical Safety
The multi-axis motion system is capable of fast movement and significant force. Fingers, cables, and objects can be crushed or damaged during movement of axes. Never reach into the motion area while motors are powered. Especially in the lift area around the Z-Axis.

## Controller Area
The control system is exposed. Dropping screws, tools, or metal shavings into the controller housing can cause short circuits and permanent damage. Keep all tools away from the electronics during operation.

## Optical Components
The line-scan sensor and filters are sensitive components. Always keep lens caps on when not in use and avoid any exposure to dust or physical contact. Use only a soft duster or air to clean optics.

## Thermal Exposure
High-intensity LED lighting is required for proper imaging. Extended exposure to bright lights may heat up delicate samples. If working with heat-sensitive materials, consult the section on Light Requirements.

# Skills Required
Building Splicer requires a hybrid set of skills across electronics, mechanical assembly, software configuration. Most of the required skills can be aquired by reading open access materials on the internet or by studying youtube tutorials. At a minimum, the following proficiencies and tools are necessary:

- **Basic electronics knowledge**: including 220V safety, grounding, and wiring of power supplies and motors.
- **Software fluency**: familiarity with installing Linux and Windows, and basic G-code/CNC concepts; Blender is used for motion path creation.
- **Mechanical skills**: the ability to handle precision assembly, calibration, and maintenance.

# Tools Required

- Standard hex key set
- Plyers and Wire strippers
- Soldering iron
- Duster or compressed air for optical/electronic maintenance
- RJ45 crimping tool (optional, but recommended for custom-length cables)
- Bubble level
- 3D Printer (Many custom parts and custom fixtures are produced using a 3D printer. A print bed size of at least 20 × 20 cm is required. All 3D files are open-source and available in the GitHub repository.)

