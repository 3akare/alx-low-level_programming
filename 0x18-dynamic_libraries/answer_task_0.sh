#!/bin/bash
gcc -c -fPIC 0-main.c
gcc -shared -o libdynamic.so *.o
nm -D libdynamic.so
