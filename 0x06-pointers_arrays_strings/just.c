#include "main.h"
#include <stdio.h>

/**
 * main - magic.c
 * Return: Always (0)
 */

int main(void)
{
	int m;
	int a[5];
	int *p;

    //in c when an integer is declared and an integer array follows, 6 bits of memory is given

    //in c when an integer is declared and an char array follows, 15 bits of memory is given

    //when a char is declared and a char array follows, 
    //12 bits of memory is given

    //when a char is declared and a int array follows, 
    //9 bits of memory is given

	// a[2] = 1024;
	p = &m;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 4) = 98;
	/* ...so that this prints 98\n */
    // printf("n = %ld\n", sizeof(3));
    printf("n = %p\n", (p + 5));
    printf("m = %p\n", &m);
    // printf("n = %d\n", *(p + sizeof(int) * ));
	printf("a = %p\n", &a);
	// printf("a[0] = %p\n", &a[0]);
	// printf("a[1] = %p\n", &a[1]);
	printf("a[2] = %p\n", &a[2]);
	// printf("a[3] = %p\n", &a[3]);
	// printf("a[4] = %p\n", &a[4]);
	return (0);
}
