#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
