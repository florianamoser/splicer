<figure markdown="1">
![Splicer Wiring Diagram](https://raw.githubusercontent.com/florianamoser/splicer/refs/heads/main/documentation/assets/FlorianAmoser_Splicer_ElectronicsDiagram.webp)
<figcaption>Splicer Wiring Diagram</figcaption> 
</figure>

This diagram is both functional and a artistic work: it shows a digitally hand-drawn depiction of Splicer’s wiring. It gives all required information for electrical integration and is in itself a scaled repiction of an aspect of Splicer.

Splicer operates across four independent voltages, each serving distinct components of the apparatus. The separation of these layers is essential for maintaining signal integrity, safety, and operational stability.

48V: High-power servo motors (Sample mover and Z lift)
24V: Stepper motors, endstop switches, logic level triggers.
12V: Line scan sensor and sensor cooling system.
5V:	Raspberry Pi (LinuxCNC motion controller)
Ensure each PSU is clearly labeled, fused, and verified before initial startup.

> All wiring connections must be made only while the machine is fully disconnected from mains power. Never connect or disconnect components with live voltage present.