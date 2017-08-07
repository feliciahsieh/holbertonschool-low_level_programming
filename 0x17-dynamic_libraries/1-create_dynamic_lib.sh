#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o
ls -la liba*
nm -D --defined-only liball.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lall -o len
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
