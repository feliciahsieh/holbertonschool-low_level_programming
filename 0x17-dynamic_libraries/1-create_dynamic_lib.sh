#!/bin/bash
gcc-4.8 -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc-4.8 -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
