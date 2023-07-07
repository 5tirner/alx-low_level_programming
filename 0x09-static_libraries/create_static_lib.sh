#!/bin/bash
gcc -Wall -Wextra -Werror *.c
ar rc liball.a *.o
