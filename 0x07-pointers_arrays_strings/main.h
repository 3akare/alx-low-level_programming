#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void set_string(char **s, char *to);
char *_memset(char *s, char b, unsigned int n);
void print_diagums(int *a, int size);
char *_strpbrk(char *s, char *accept);
char _putchar(char *c);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
