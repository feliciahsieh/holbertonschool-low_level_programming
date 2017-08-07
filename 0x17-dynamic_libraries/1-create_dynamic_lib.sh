#!/bin/bash
gcc-4.8 -Wall -Werror -Wextra -pedantic -c -fpic *.c
gcc-4.8 -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
