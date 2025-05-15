# Image Output Specifications

Splicer employs a high-resolution line scan sensor for image acquisition. Unlike conventional area sensors, which capture two-dimensional frames in a single exposure, a line scan sensor captures one line of pixels at a time, progressively building an image.

## Sensor Overview

- **Sensor type**: Monochrome line scan CCD  
- **Resolution**: 1 × 8196 pixels  
- **Pixel pitch**: 7 µm (micrometers)  
- **Sensor width**: ~57.4 mm (8196 × 7 µm)  
- **Line orientation**: Typically vertical, but can be rotated in the optical path if necessary  

Each pixel represents a discrete intensity value, and because the sensor is monochrome, color must be derived through alternative methods (trichromatic filtering).

## Image Construction

The sensor captures a single vertical line at a time. To construct a complete two-dimensional image, successive lines must be captured while the sample moves.

A **trigger signal** controls the precise moment each line is captured, allowing for real-time coordination with Splicer's multi-axis motion system. This ensures that spatial and temporal synchonisation is maintained, even during complex motion paths or non-linear sampling routines.

## Spatial Format and Dimensions

The total number of captured lines determines the height (or width, depending on orientation) of the final image. For reference:

- **Square image**:  
  Requires 8196 lines to match the sensor’s vertical resolution.  
  → **8196 × 8196 pixels**
    
- **4:5 aspect ratio** (landscape orientation):  
  Requires:  
  `8196 ÷ 4 × 5 = 10,245` lines  
  → **8196 × 10,245 pixels**

## Extended Image Length and Iterative Capture

In principle, the maximum resolution in the direction of capture is undefined. In practice, however, operational constraints such as capture duration and workflow complexity impose effective boundaries.

Successful images have been captured with up to **65,000 captured lines**, resulting in extremely high-resolution panoramic formats (520 Megapixels, Aspect ratio 8:65). These extended formats are possible, but become increasingly cumbersome and slow to work with — both during capture as in print.

To accommodate this, Splicer supports an **iterative image-making process**. Rather than capturing a full-resolution image in a single pass, operators may opt to capture **individual sections or segments**. This allows for focused work on specific sections of the composition before committing to a full-scale final image, improving both control and efficiency during the development phase.