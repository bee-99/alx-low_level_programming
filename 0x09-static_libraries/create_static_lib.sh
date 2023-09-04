#!/bin/bash
gcc -c *.c | arc -rc liball.a *.o
