# Project: 0x13. C - Bit manipulation
----

## Description
Shows the utility of the bitwise operations and programs.

----
## Usage
Compiled on Ubuntu 14.04 LTS with gcc 4.8.4 (C90) using the flags -Wall -Werror -W\
extra and -pedantic
The code follows the Betty style (using betty-style.pl and betty-doc.pl)
No global variables are used
Each file has less than 5 functions per file
Minimal C standard library functions are used (only malloc, free, and exit used).
The header files are include guarded

**unsigned int binary_to_uint(const char *b)** - Converts a binary to unsigned integer

**void print_binary(unsigned long int n)** - Prints a binary number to unsigned integer

**int get_bit(unsigned long int n, unsigned int index)** - Returns the bit at a given index

** int set_bit(unsigned long int *n, unsigned int index)** - Sets the bit of a given index

**int clear_bit(unsigned long int *n, unsigned int index)** - Clears the bit at a given index

**unsigned int flip_bits(unsigned long int n, unsigned long int m)** - Finds the number of bits needed to flip to reach a certain number

**int get_endianness(void)** - Finds if Big Endian or Little Endian is used

**101-password** - file to unlock the crackme3 encryption program

----
## Installation
Installation: Git clone the code from feliciahsieh
[low_level_programming.git](https://github.com/feliciahsieh/holbertonschool-low_level_programming.git)

----
## Change Log
* 29-Jun-2017 Update README.md

----
## License
GPL Public License