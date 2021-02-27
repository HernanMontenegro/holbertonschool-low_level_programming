#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar liball.a *.o
