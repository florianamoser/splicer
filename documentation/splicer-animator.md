**Splicer-animator** is the splicer control script. Use it to control the precise movement of the sample. The script is running in Blender to convert a frame animation to machine readable gcode file on splicer.

[Click here for current release of the splicer-animator](https://github.com/florianamoser/splicer/tree/main/software/animator)


!!! tip "Prerequisite to run splicer-animator"  

    The script has so far only been tested on MacOS. When starting Blender from the application launcher, the splicer-animation-script is not able to write the GCODE to the harddisk. Blender needs to be started from the command line. Follow the link below for more informations on how to start blender from the command line.  
    [Blender Documentation MacOS: Launching from the command line](https://docs.blender.org/manual/en/latest/advanced/command_line/launch/macos.html)


![splicer animator in blender: overview](/splicer/assets/splicer-animator-1.png){ align=left }  
*Click on image to enlarge*

**Splicer-animator Interface Overview**

1. **Tabs**: Switch between **Animator** and **Export Script** workspace.  
2. **Blender Outliner**: Select between the **Camera** and the **Sample** object.  
3. **Overview**: The **origin of the scene** is located at the **aperture of the Splicer's lens**. The **black triangle** represents the view cone of the **line sensor**.  
4. **Camera View**: Displays the scene from the **camera's perspective**. The **gray line** in the center of the viewport indicates the region captured by the sensor.  
5. **Graph Editor**: Used to **animate the movement** of splicer's axes.  

![splicer animator in blender: Aspect Ratio](/splicer/assets/splicer-animator-2.png){ align=left }  
*Click on image to enlarge*

**Splicer-animator Aspect Ratio**

!!! tip "Aspect Ratio of the Image"

    To start a new image, decide first on the aspect ratio of the image. The sensor has 8096 by 1 pixels. A square image (Aspect Ratio 1:1) requires therefore 8096 lines (equal to 8096 frames in Blender. The terms **"lines"** and **"frames"** are used interchangeably.). An horizontal image with the ratio 4:5 therefore requires `8096 / 4 * 5 = 10120` frames in Blender and results in an output image of about 82 Megapixel.  

1. **Select the Camera object** in the Blender Outliner.
2. Set the **Frame Range → End** value to the desired image length.
3. Adjust the **Preview Range** to match the updated frame range as needed.

![splicer animator in blender: Animate Sample](/splicer/assets/splicer-animator-3.png){ align=left }  
*Click on image to enlarge*

**Splicer-animator Animate Sample**

!!! tip "Read `Axis Specification` before animation"

1. **Select the Sample object** in the Blender Outliner.  
2. Set the **Sample object dimensions** to match the physical dimensions of the actual sample.  
3. Move the **Cursor** to the desired line position.  
4. Alternatively, jump directly to a specific line position by entering the exact line number.  It is recommended to begin by setting keyframes at major intervals (e.g., `0`, `1000`, `2000`, etc.) and aligning keyframes between different axis before refining the animation with additional detail.  
5. Adjust the **position of each axis** as required.  

   - A **gray background** indicates that no keyframes are present for that axis.   
   - A **green background** indicates that keyframes are present, but not at the current cursor position.  
   - A **yellow background** indicates that keyframes are present at the current cursor position for the selected axis.  

![splicer animator in blender: Export Gcode](/splicer/assets/splicer-animator-4.png){ align=left }  
*Click on image to enlarge*

**Splicer-animator Export Gcode**

1. Select the **Export Script** workspace.
2. Set the **Name Variable** to the desired image title.
3. Click the **Play** button. The G-code will be exported to the folder specified by the **path variable** in the script.

!!! tip "Gcode Naming Scheme"

    Gcode files are named using the following format: **Date_ProjectName_StartFrame-EndFrame**. This naming convention helps track the settings required for configuring the Capture Software.  

!!! tip "Working Iteratively"

    After creating an initial rough animation, it is often useful to work on smaller frame ranges to fine-tune specific sections of the image.  To do this, adjust the **Start Frame**, **End Frame**, and **Preview Range** settings in the Camera configuration panel. Once the adjustments are complete, switch back to the **full frame range** for the final capture.









