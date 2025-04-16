**splicer-animator** is the splicer control script. Use it to control the precise movement of the sample. The script is running in Blender to convert a frame animation to machine readable gcode file on splicer.

[Click here for current release of the splicer-animator](https://github.com/florianamoser/splicer/tree/main/software/animator)


!!! tip "Prerequisite to run splicer-animator"  

    The script has so far only been tested on MacOS. When starting Blender from the application launcher, the splicer-animation-script is not able to write the GCODE to the harddisk. Blender needs to be started from the command line. Follow the link below for more informations on how to start blender from the command line.  
    [Blender Documentation MacOS: Launching from the command line](https://docs.blender.org/manual/en/latest/advanced/command_line/launch/macos.html)


![splicer animator in blender: overview](/splicer/assets/splicer-animator-1.png){ align=left }  
*Click on image to enlarge*

**splicer animator in blender: overview**

1. Tabs: Use this to switch between Animator and Export script
2. Blender Outliner: Select Camera or Sample
3. Blender Scene overview: The origin of the scene is at the aperture of splicer's lens. The black triangle is the view cone of the linesensor. 