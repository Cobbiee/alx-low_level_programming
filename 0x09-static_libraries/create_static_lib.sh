#!/bin/bash


# Compile each .c file in the current directory into object files .o
gcc -c *.c


# Create the static library liball.a from the object files
ar rcs liball.a *.o


# Clean up the object files
rm *.o
