As shown in the [sensor manual](https://documentation.splicer.camera/external-manuals/) on page 23, the parameters of the line scan sensor can be controled via a serial interface over CamLink directly from within the framegrabber software. 

A simple get-camera-parameters `gcp` command will show the currently active settings on the sensor. 
Below is a dump the settings currently active on Splicer. The `Analog Gain` might be reduced in the future when brigher lights are used during sampling. 

The `Exposure Time` parameter is often changed throughout the process of image creation. While `3200 uSec` results in the brightest possible image, it requires the feedrate within LinuxCNC to be reduced to `25%`. Otherwise there is a risk of dropped lines. During early development of the image, the exposure time is often reduced to `1500 uSec` or lower. Send a set-exposure-time `set 1500` to reduce the exposure time to `1500 uSec`.  

```
OK>gcp

G E N E R A L   C A M E R A   S E T T I N G S:

Camera Model No.:               P2-49-08K40
Camera Serial No.:              11021680
Sensor Serial No.:              000000000
Camera Network ID:              0
Network Message Mode:           disabled

Firmware Design Rev.:           03-39-00475-02 Mar 27 2007
DSP Design Rev.:                1.4

SETTINGS FOR UNCALIBRATED MODE:

Analog Gain (dB):               +7.0    +7.5    +7.5    +7.0    
Analog Offset:                  475     539     601     514    

SETTINGS FOR CALIBRATED MODE:

Analog Gain (dB):               +0.0    +0.5    +0.5    +0.0    
Analog Offset:                  0       0       0       0      
Digital Offset:                 0       0       0       0      
Calibration Status:             FPN [uncalibrated] PRNU [uncalibrated]

SETTINGS COMMON TO CALIBRATED AND UNCALIBRATED MODES:

System Gain:                    0       0       0       0      
Background Subtract:            0       0       0       0      

Pretrigger:                     0      
Number Of Line Samples:         64     
Video Mode:                     calibrated
Data Mode:                      0      
Exposure Mode:                  6      

SYNC Frequency:                 external (SYNC not detected) Hz
Exposure Time:                  3200.000 uSec

End-Of-Line Sequence:           on
Upper Threshold:                255    
Lower Threshold:                0      
Region Of Interest:             0001 - 8192


WARNING: External SYNC not detected

```