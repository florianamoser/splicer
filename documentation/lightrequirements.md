# Light Requirements

Due to the specific optical and mechanical properties of Splicer's imaging system, adequate and stable lighting is critical to ensure proper image acquisition. The following guidelines and considerations must be observed to achieve consistent and high-quality results.

---

## Exposure Time and Light Intensity

The line scan sensor used in Splicer operates with extremely short exposure times of **3,200 microseconds or shorter per line**. This necessitates **high-intensity illumination** to ensure a sufficient signal-to-noise ratio in the captured image.

To support efficient workflow, faster acquisition speeds are desirable. The faster the recording, the more agile and iterative the image-crafting process becomes. Insufficient lighting slows this process, requiring either longer exposures or reduced capture speed.

In macro-scale imaging, depth of field is naturally shallow. To increase depth of field, apertures of **f/11 or smaller** (higher f-numbers) are recommended. However, smaller apertures reduce the amount of light reaching the sensor, further increasing the demand for intense illumination.

The RGB trichromatic filter system in the optical path introduces additional light loss: approximately **1.5 to 2.5 stops**, depending on the filter color. This must be compensated with additional light.

---

## Recommended Lighting Setup

**LED lighting** is recommended due to its efficiency, spectral stability, and continuous output. The current configuration uses **three 200W LED lights**, collectively producing up to **40,000 lux** at the sample position—equivalent to full, direct sunlight. This is considered the **minimum usable illumination**; higher lux levels may be necessary depending on:

- Aperture settings  
- Sample reflectivity 
- Diffusors in use  
- Sample size  
- Desired acquisition speed

> **Avoid flickering**: Some dimming circuits introduce flicker at high frame rates, causing visible banding in the final image. To prevent this, operate flickerprone lights at full power. Adjust intensity by changing the **distance** between the light source and the subject — not via dimming controls.

---

## Light Diffusion and Sample Safety

Use **diffusion foils** or other translucent materials to build a lightbox around the sample. This softens shadows and helps achieve even lighting. The configuration should be adapted based on the sample’s optical properties and fragility.

> **Thermal caution**: Bright, focused lights can generate heat. Use care with **heat-sensitive or delicate materials** to prevent damage or deformation. Monitor temperature during prolonged exposure.
