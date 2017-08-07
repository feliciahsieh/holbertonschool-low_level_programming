#!/bin/bash
gcc-4.8 -Wall -Werror -Wextra -pedantic -fpic -c *.c
gcc-4.8 -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
