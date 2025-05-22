After Splicer has been moved, transported, or the lens has been changed, the focus system must be recalibrated to maintain precise alignment between the `Y axis` (object distance) and the `V axis` (sensor-to-lens distance). This recalibration ensures that samples remain sharp across the full range of motion and that future captures can be automated with reliable focus parameters.

<figure markdown="1">
![Splicer Focus Calibration Target](https://raw.githubusercontent.com/florianamoser/splicer/refs/heads/main/documentation/assets/FlorianAmoser_Splicer_FocusTarget.webp)
<figcaption><a href="https://github.com/florianamoser/splicer/blob/main/hardware/cad/splicer_sample-mounts/splicer_focus-calibration.f3d">Splicer Focus Calibration Target</a></figcaption> 
</figure> 

The calibration process begins by capturing a series of line scans of a `focus calibration target` placed at defined distances along the `Y axis`. Typically, the procedure starts at `Y = 100 mm` and continues in `50 mm` increments up to `500 mm`, followed by `100 mm` steps until the `Y axis limit` at `1100 mm` is reached. Each scan involves movement only along the `X axis`, with the `V axis` (focus) kept fixed for the duration of a single capture. A GCODE file for linear movement can be found on [Github](https://github.com/florianamoser/splicer/tree/main/software/linux-cnc-config/G-Codes/_Calibration). During Focus Calibration, the `Line Sync Source` on the Frame Grabber needs to be switched to `internal line triggering`. See Chapter [Frame Grabber Settings](https://documentation.splicer.camera/building-framegrabber/) for detailed information.

The resulting images are examined to locate the region of maximum sharpness, indicating where the image plane intersects the physical target. According on whether the sharp region appears in front of or behind the target's expected position, the `V axis` is adjusted manually, and a new capture is acquired. This iterative process is repeated for each `Y axis` distance until each optimal `V` (focus) value is identified.

Once a full dataset of `Y` and corresponding `V` values has been established, the relationship can be modeled using a polynomial curve function. Surprisingly, ChatGPT has proven to be an effective tool for estimating the curve from raw calibration data. The resulting function allows Splicer to calculate the appropriate `V` value dynamically for any `Y` position.

As a last step, the function is to be [embedded directly into the Splicer Animator Script](https://documentation.splicer.camera/building-gcode/), enabling all future GCODE exports to include automated focus compensation without requiring manual adjustment. The [calibration target](https://github.com/florianamoser/splicer/blob/main/hardware/cad/splicer_sample-mounts/splicer_focus-calibration.f3d) used in this process is open-source and can be downloaded and 3D-printed from the official GitHub repository.
  
<figure markdown="1">
![Splicer Focus Calibration](https://raw.githubusercontent.com/florianamoser/splicer/refs/heads/main/documentation/assets/FlorianAmoser_Splicer_FocusValidation.webp)
</figure>  

```
SPLICER / FOCUS VALIDATION, 17. Februar 2025
C-print, 30x37.5cm on paper 40x50  

This image is a validation capture of Splicer’s autofocus calibration. 
From left to right are a sequence of Y-axis positions, each 
corresponding to a different object distance from the lens. The photograph
reveals how the sharpness plane shifts across the distance: at times 
falling in front of, and at other times behind, the calibration target’s 
ideal focus point. The work functions both as a diagnostic image and 
a representation of the spatial and optical interplay.  
```

<!-- > Splicer / Focus Validation
> C-print, 30x37.5cm on paper 40x50, with pen plot annotation
> This image is a validation capture of Splicer’s autofocus calibration. From left to right are a sequence of Y-axis positions, each corresponding to a different object distance from the lens. The photograph reveals how the sharpness plane shifts across the distance: at times falling in front of, and at other times behind, the calibration target’s ideal focus point. The overlaid pen plot make the underlying logic readable the intended focus alignment. The work functions both as a diagnostic image and a representation of the spatial and optical interplay. -->