#!/bin/bash
# Delete all previous files 
#rm -r .parasoft .project .cproject build/ .cpptest/

# Creating a build directory 
mkdir .build && cd .build

# Build the project with -DCPPTEST_PROJECT=ON 
cmake -DCPPTEST_PROJECT=ON .. 

make 


