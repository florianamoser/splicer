ADD SCREENSHOT FILTER CHANGER

### Monochrome Capture

![splicer sensor spectral sensitivity](/splicer/assets/mono-and-rgb_1.png){ align=left, width="450" }  
*Splicer sensor spectral sensitivity[^1]*   

The Splicer's line sensor is monochrome and exhibits sensitivity in the infrared (IR) spectrum. To ensure accurate image capture, a UV/IR blocking filter is installed in the optical path behind the lens, preventing unwanted spectral tinting the output.   

![UV&IR Cut Filter Transmission curve](/splicer/assets/mono-and-rgb_2.png){ align=left, width="450" }   
*Transmission Curve of Hoya UV & IR cut filter[^2]*

***

### Full Color Capture 

For monochrome captures, a single exposure is often sufficient. However, due to the limited dynamic range of Splicer's sensor, it may be necessary to capture multiple images at different exposure levels. These can then be blended manually in post-processing software to achieve acceptable results.

To capture full-color images using the monochrome sensor, Splicer employs a **tri-color filter method** based on classical color separation. This technique, which dates back to the earliest forms of color photography[^3], involves capturing three separate exposures through red, green, and blue filters. The resulting images—commonly referred to as *Trichromes* are then combined to produce a full-color image.

!!! tip "RGB Line Scan Sensors"

    Line scan sensors capable of capturing color do exist. Instead of a single monochrome line of pixels, they feature either a bilinear Bayer pattern across two lines or a trilinear line array, where each of the three lines is sensitive to a different primary color (red, green, or blue). These lines are physically offset from one another (e.g., by 40 µm in the tested Takex TLC-7300 UCL Sensor[^3]). Tests with the mentioned trilinear RGB sensor have shown that this physical offset introduces significant divergence in the optical path for each line in the physical space. As a result, such sensors are only suitable for capturing flat objects. In the specific use case of Splicer, the geometric misalignment introduced by the offset renders trilinear sensors unsuitable.   

Splicer has a filterwheel in it's optical path. Position 1: no filter, Position 2: red filter, Position 3: green filter, Position 4: blue filter.

The currently used rgb separation filters are 75 x 75mm gel separation filters from Lee Filters. Red is #25, Green is #58 and Blue #47. The numbers are according to Kodak Wratten 2[^5] naming scheme. It seems that these filters are not available anymore. A potential (but more costly) replacement / upgrade could be glass filters from Edmund Optics.

### Color Separation Filters

Splicer includes a filter wheel in its optical path with the following configuration:

- Position 1: No filter  
- Position 2: Red filter  
- Position 3: Green filter  
- Position 4: Blue filter  

The current RGB separation filters are 75 × 75 mm gel filters from Lee Filters:

- Red: #25  
- Green: #58  
- Blue: #47  

These reference numbers follow the Kodak Wratten 2[^5] naming scheme.  
As of now, these specific filters appear to be discontinued. A potential, but  more costly, replacement could be glass filters available from Edmund Optics.  

![Kodak Wratten 2 #25 Transmission Curve](/splicer/assets/mono-and-rgb_3.png){ align=left, width="450" }  
*Kodak Wratten 2, red #25 Transmission Curve[^5]*  


![Kodak Wratten 2 #58 Transmission Curve](/splicer/assets/mono-and-rgb_4.png){ align=left, width="450" }  
*Kodak Wratten 2, green #58 Transmission Curve[^6]*  


![Kodak Wratten 2 #47 Transmission Curve](/splicer/assets/mono-and-rgb_5.png){ align=left, width="450" }  
*Kodak Wratten 2, blue #47 Transmission Curve[^7]*  

!!! tip "RGB Filter Wheel"

    The filter wheel is currently operated manually and must be rotated by hand. Preparations are underway to enable motorized control via a servo, which will be triggered in Gcode.


[^1]: Piranha 2, Line Scan CCD Cameras User Manual, Teledyne Dalsa, 2011: 12.  
[^2]: [Hoya UV&IR Cut Filter](https://hoyafilter.com/product/uv_ir_cut/) 
[^3]: [Three-color processes](https://en.wikipedia.org/wiki/Color_photography#Three-color_processes)
[^4]: [Takex TLC-7300UCL Manual, Page 5](https://www.takex-system.co.jp/en/products/line/TLC-7300UCL_man_ins.pdf)
[^5]: [Kodak Wratten 2 Filter](https://www.kodak.com/en/motion/page/wratten-2-filters/)
[^6]: [Kodak Wratten 2, red #25 Transmission Curve](https://www.kodak.com/content/products-brochures/Film/Basic-Color-Filters-W2-25.pdf)
[^7]: [Kodak Wratten 2, green #58 Transmission Curve](https://www.kodak.com/content/products-brochures/Film/Basic-Color-Filters-W2-58.pdf)
[^8]: [Kodak Wratten 2, blue #47 Transmission Curve](https://www.kodak.com/content/products-brochures/Film/Basic-Color-Filters-W2-47.pdf)