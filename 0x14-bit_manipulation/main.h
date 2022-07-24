#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned long int index);

#endif
