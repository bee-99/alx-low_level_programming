#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c | arc -rc liball.a *.o | ranlib liball.a
