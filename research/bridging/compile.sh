#!bin/bash
cc -fPIC -o test test.c functions.c
cc -fPIC -shared -o functions.so functions.c
