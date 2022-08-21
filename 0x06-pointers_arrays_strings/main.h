#ifndef MAIN_H
#define MAIN_H


/**
 * enum leet_int - a list of number to help int task 7
 * @a: an integer
 * @A: an integer
 * @e: an integer
 * @E: an integer
 * @o: an integer
 * @O: an integer
 * @t: an integer
 * @T: an integer
 * @l: an integer
 * @L: an integer
 */

enum leet_int
{
	a = 4,
	A = 4,
	e = 3,
	E = 3,
	o = 0,
	O = 0,
	t = 7,
	T = 7,
	l = 1,
	L = 1
};

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int c);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *str);
void print_number(int n);
char _putchar(char c);

#endif
