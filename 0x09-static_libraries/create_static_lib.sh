#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -c liball.a *.o
