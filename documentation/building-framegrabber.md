Configuration file for Xcelera-CL+ PX8 framegrabber used in Splicer can be downloaded on [Splicer Github Repository](https://github.com/florianamoser/splicer/tree/main/software/framegrabber)

This `.ccf` file is used by Teledyne DALSA's Sapera software to define how the Xcelera framegrabber communicates with a connected CameraLink Sensor. It configures timing, resolution, trigger modes, signal routing, and other acquisition parameters required for operation in Splicer.

---

# Camera Configuration File Parameters

By opening the `.ccf` camera configuration file in the frame grabber software, all settings should be set correct for capture. For reference below an annotated list of the most important parameters.  

| Category | Parameter | Value | Notes |
|----------|----------|----------|----------|
| Basic Timing | Camera Type     | Linescan     |  |
| Basic Timing | Color Type     | Monochrome     |  |
| Basic Timing | Pixel Depth     | 8     |  |
| Basic Timing | Horizontal Active (in Pixels)     | 8192     | This setting can be used to reduce active line length / resolution. This may be useful on lenses with smaller image circle |
| Basic Timing | Horizontal Offset| 0     |  |
| Basic Timing | Pixel Clock Input Frequency (MHz)| 40     |  |
| Basic Timing | Data Valid| Disabled     |  |
| Basic Timing | Camera Sensor Geometry Setting| 2X2E-1Y     |  |
| Basic Timing | PoCL| Disabled     |  |
| Advanced Control | Line Sync Source| Shaft Encoder input     | If this is changed to internal line trigger, the following internal line trigger frequency becomes active and the sensor will capture an image without an external signal present. This can be ideal for debugging and during calibration |
| Advanced Control | Internal Line Trigger Frequency (in Hz)| 5000 (grayed out)     |  |
| Advanced Control | Camera Line Trigger Frequency Min (in Hz) | 0 |  |
| Advanced Control | Camera Line Trigger Frequency Max (in Hz) | 18600 |  |
| Advanced Control | Camera Control Method selected | None |  |
| Advanced Control | Line Integration Method Setting | None |  |
| Advanced Control | Line Trigger Method Setting | None |  |
| Advanced Control | Strobe Method Setting | None |  |
| Advanced Control | CC1 | Pulse #1 |  |
| Advanced Control | CC2 | Pulse #0 |  |
| Advanced Control | CC3 | Not Used |  |
| Advanced Control | CC4 | Not Used |  |
| External Trigger | External Trigger | Enable |  |
| External Trigger | External Trigger Detection | Rising Edge |  |
| External Trigger | External Trigger Level | TTL |  |
| External Trigger | External Trigger Source | From External Trigger #1 |  |
| External Trigger | External Trigger Minimum Duration (in us) | 0 |  |
| External Trigger | Frame Count per External Trigger | 1 |  |
| External Trigger | External Trigger Delay | 0 |  |
| External Trigger | External Trigger Delay Time Base | Line Counts |  |
| External Trigger | External Trigger Delay | 0 |  |
| External Trigger | Shaft Encoder Source | From Shaft Encoder Optocoupled |  |
| External Trigger | Shaft Encoder Direction | Ignored |  |
| External Trigger | Shaft Encoder Edge Drop | 0 |  |
| External Trigger | Shaft Encoder Edge Multiplier | 1 |  |
| External Trigger | External Line Trigger Source | Automatic |  |
| Image Buffer and ROI | Image Width (in Pixels) | 8192 |  |
| Image Buffer and ROI | Image Height (in Lines) | 10000 | This setting determines the length of the captured frame.  |
| Image Buffer and ROI | Image Left Offset (in Pixels) | 0 |  |
| Image Buffer and ROI | Image Buffer Format | Monochrome 8-bits |  |
| Image Buffer and ROI | Image Flip | Disabled |  |
| Image Buffer and ROI | Acquisition Frame Length method | Variable Length |  |


