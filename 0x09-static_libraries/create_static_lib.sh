#!/bin/bash
# This script creates a static library called liball.a from all the .c files in the current directory

# Compile all .c files into .o object files
gcc -c *.c

# Create a static library named liball.a from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o

