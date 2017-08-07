#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -fPIC -c *.c
gcc -Wall -Wextra -Werror -pedantic -shared -o liball.so *.o
