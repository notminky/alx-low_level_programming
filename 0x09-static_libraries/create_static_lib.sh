#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *.o

echo "Static library liball.a has been created successfully."
