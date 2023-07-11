#!/bin/bash
gcc -WALL -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
