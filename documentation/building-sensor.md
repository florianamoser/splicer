Any monochrome line scan sensor can, in principle, be used with Splicer. However, sensors other than the Dalsa Teledyne P2-49-08k40 will require modifications to the sensor mount and potentially to the entire toolhead layout.

Key considerations when selecting a sensor include its availability and the interface or data acquisition infrastructure required to operate it. The Dalsa Teledyne P2-49-08k40, for example, requires a Windows-based computer equipped with an FPGA PCI frame grabber to capture image data. This sensor uses a Camera Link interface and connects via two MDR26 cables to the Dalsa Teledyne Xcelera-HS PX8 frame grabber. These components occasionally become available on the industrial surplus market and can be acquired at reasonable prices. The sensor referenced here was sourced from surplus in Seoul, Korea, and the frame grabber from a Chinese surplus vendor.

While the dynamic range of this sensor is limited and it requires a high level of low contrast illumination due to its low sensitivity and quick saturation, it offers a significant resolution of 1 by 8196 pixels across a physical line length of approximately 58 millimeters. This results in a gate width larger than traditional analog medium format film, a specification rarely encountered in digital imaging.

It is essential to use a monochrome sensor. Tests conducted with a Takex TLC-7300UCL, a trilinear color sensor with three parallel lines, have demonstrated that bilinear or trilinear sensors introduce parallax errors due to spatial separation of the sensor lines. These errors render the output unusable for the imaging approach employed by Splicer.

<figure markdown="1">
![Splicer Sensor](https://raw.githubusercontent.com/florianamoser/splicer/refs/heads/main/documentation/assets/FlorianAmoser_Splicer_Sensor.webp){width="450"}
</figure>

```  
SPLICER / DEVELOPMENT, Sensor
C-print, 40 × 50 cm  
```  