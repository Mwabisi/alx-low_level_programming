#!/bin/bash
gcc -wall -wall -Werror -Wextra -pedantic -c *c
ar rc liball.a *.o
