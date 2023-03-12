#!/bin/bash

# Compile each .c file into an object file
for file in *.c; do
    gcc -c $file -o ${file%.c}.o
done

# Create the static library from all the object files
ar rcs liball.a *.o

# Remove the object files
rm -f *.o
