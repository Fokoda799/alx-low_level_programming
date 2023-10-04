#!/bin/bash

# Find all .c files in the current directory and store them in a variable
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Check if there are any .c files
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile the .c files into object files
for file in $c_files; do
  object_file="${file%.c}.o"
  gcc -c "$file" -o "$object_file"
done

# Create the static library
ar rcs liball.a *.o


