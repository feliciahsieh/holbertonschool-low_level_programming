#!/bin/bash
gcc -Wall -fPIC -c _*.c
gcc -shared -o libholberton.so *.o
ls -la lib*
nm -D libholberton.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len
ldd len
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
ldd len
./len
