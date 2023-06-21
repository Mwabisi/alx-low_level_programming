#!/bin/bash
gcc -wall -pendantic -werrar -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
