﻿
# clustering Tests

This program uses a euclidean clustering algorithm.
After clustering each cluster is than represented as a sphere. Each cluster retains it's location, approximate size, and approximate points. The name of the file to be processed is asked for at run-time. The name of the file to be saved is asked for at run-time.

    ----variables----
    (int) maximum points
    (int) minimum points
    (float) cluster tolerance

![Alt text](../Photos/ClusteredZoom.PNG)

## Feeding variables from a file

If you want to run the program without entering the variables each time:

* Create an empty file. The name doesn't mater.
* Enter the values you want to use for the variables in the order that they appear int the ReadMe file.
* Each variable should be separated with a new line.
* Run the program with the fallowing terminal command.
  * ./<\Program name> < \<Variable File name>

## Example

### Terminal:
    ./TestProgram < param.txt
### param.txt:

    20
    500
    5.3