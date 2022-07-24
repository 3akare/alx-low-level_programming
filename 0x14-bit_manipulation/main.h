#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
int get_endianness(void);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned long int index);
int clear_bit(unsigned long int *n, unsigned long int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
