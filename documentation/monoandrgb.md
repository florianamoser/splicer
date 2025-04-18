SCREENSHOT FILTER CHANGER

![splicer sensor spectral sensitivity](/splicer/assets/mono-and-rgb_1.png){ align=left }  
Splicer sensor spectral sensitivity[^1]

Splicer' line sensor is monochrome. The monochrome sensor has sensitivity into IR spectrum. Therefore a UV / IR filter blocking filter is installed in the optical path behind the lens.

![UV&IR Cut Filter Transmission curve](/splicer/assets/mono-and-rgb_2.png){ align=left }  
Transmission Curve of Hoya UV & IR cut filter[^2]

For Monochrome captures, a single capture is often enough. As Splicers sensor has a limited Dynamic Range, it is sometimes needed to capture images at different exposure levels and use manual exposure blending in photoshop to get acceptable results. 

Splicer uses a classical color separation tri-color filter approach to capture full color images with a monochrome sensor. This approach dates back to the first color photography[^3]. The resultingimages are often called Trichromes. 

!!! tip "RGB line scan sensors" 
    Linescan sensors that capture color exist. Instead of a single monochrome line of pixels, they either have a bilinear bayer pattern over two lines or three lines, each of them sensitive to another primary color (red, green, blue). The lines have a phyisical distance between them (40µm in case of the tested Takex TLC-7300 UCL Sensor[^3]). Tests with the mentioned trilinear RGB sensor show that the physical distance result in too much divergance of the optical path of each line. Therefore trilinear sensors are only useful in capturing flat objects. In the specific usecase of splicer they geometrically do not work.  

Splicer has a filterwheel in it's optical path. Position 1: no filter, Position 2: red filter, Position 3: green filter, Position 4: blue filter.

The currently used rgb separation filters are 75 x 75mm gel separation filters from Lee Filters. Red is #25, Green is #58 and Blue #47. The numbers are according to Kodak Wratten 2[^5] naming scheme. It seems that these filters are not available anymore. A potential (but more costly) replacement / upgrade could be glass filters from Edmund Optics.

![Kodak Wratten 2 #25 Transmission Curve](/splicer/assets/mono-and-rgb_3.png){ align=left }  
Kodak Wratten 2, red #25 Transmission Curve[^5]
![Kodak Wratten 2 #58 Transmission Curve](/splicer/assets/mono-and-rgb_4.png){ align=left }  
Kodak Wratten 2, red #58 Transmission Curve[^6]
![Kodak Wratten 2 #47 Transmission Curve](/splicer/assets/mono-and-rgb_5.png){ align=left }  
Kodak Wratten 2, red #47 Transmission Curve[^7]

!!! tip "RGB Filter Wheel" 
    Currently the filter wheel is still manual and needs to be turned by hand. Preparations are made to eventially control the filter with a servo that is triggerd via Gcode.

[^1]: Piranha 2, Line Scan CCD Cameras User Manual, Teledyne Dalsa, 2011: 12.  
[^2]: [Hoya UV&IR Cut Filter](https://hoyafilter.com/product/uv_ir_cut/) 
[^3]: [Three-color processes](https://en.wikipedia.org/wiki/Color_photography#Three-color_processes)
[^4]: [Takex TLC-7300UCL Manual, Page 5](https://www.takex-system.co.jp/en/products/line/TLC-7300UCL_man_ins.pdf)
[^5]: [Kodak Wratten 2 Filter](https://www.kodak.com/en/motion/page/wratten-2-filters/)
[^6]: [Kodak Wratten 2, red #25 Transmission Curve](https://www.kodak.com/content/products-brochures/Film/Basic-Color-Filters-W2-25.pdf)
[^7]: [Kodak Wratten 2, green #58 Transmission Curve](https://www.kodak.com/content/products-brochures/Film/Basic-Color-Filters-W2-58.pdf)
[^8]: [Kodak Wratten 2, blue #47 Transmission Curve](https://www.kodak.com/content/products-brochures/Film/Basic-Color-Filters-W2-47.pdf)