#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rcs liball.a *.o
rm *.o
echo "Static library liball.a has been created successfully."
