### Initial Tests and Prototypes  
  
The earliest tests of Splicer's Sensor capabilities were conducted using a minimal setup: the line scan sensor mounted directly behind a fixed lens. While this setup was sufficient to validate basic wiring, interfacing, and initial image acquisition, it offered only manual focus control. It quickly became evident that a more developed, motion-enabled camera module would be necessary to fully leverage the spatial and temporal potential the specific kind of capturing photographs.  
  
### Camera Module v1

Camera Module v1 was the first integrated imaging module developed specifically for Splicer. Taking cues from the mechanical principles of large-format studio cameras, this module features a fixed lens mounted to a rigid front standard, while the sensor was attached to a movable back standard. The sensor can be moved along linear guide rails via a stepper motor, allowing for precise, programmable focusing, introducing a motorized autofocus system.

Additionally, Camera Module v1 integrates a RGB filter rake within the optical path. This allowed for semi-automated insertion of color filters (none, red, green, blue), enabling trichromatic imaging workflows using the monochrome line scan sensor. Though mechanically rudimentary, this version established further prototyping and proof-of-concept of the aesthetic concepts behind the idea of multi-axis visual sampling.

![Splicer Camera Module v1](https://raw.githubusercontent.com/florianamoser/splicer/refs/heads/main/documentation/assets/FlorianAmoser_Splicer_Development-CameraModuleV1.webp)

```
SPLICER / DEVELOPMENT, Camera Module v1, 2021
C-print, 40 × 50 cm  
```

### Camera Module v2

As Splicer development continued, the camera module had to be reimagined from the ground up. Camera Module v2 is designed to implement the full complexity of Splicer and brought several enhancements:

Sensor X-Y Motion: Full motion-controlled sensor movement across the image plane using a repurposed CoreXY gantry system (originally from a open source VORON 3D printer, adapted for this specific need), enabling precise lateral sensor shifts along A and B axes.

Sensor Rotation: A custom mechanical subsystem was added to allow controlled rotation of the line scan sensor around its vertical axis. This introduced new compositional and optical possibilities.

Autofocus Mechanism: Permitting automated focus adjustment based on sample positioning.

Motorized Filter Changer (built, integration to software is still outstanding): The earlier manual RGB filter rake evolved into a servo-actuated filter wheel, streamlining trichromatic image acquisition.

![Splicer Camera Module v2](https://raw.githubusercontent.com/florianamoser/splicer/refs/heads/main/documentation/assets/FlorianAmoser_Splicer_Development-CameraModuleV2.webp)

Camera Module v2 is a fully custom-built unit, planned and constructed fully in CAD. The module continues the ethos of an open camera with its inner workings deliberately exposed. The full range of possibilities this new module enable, remain to be discovered.