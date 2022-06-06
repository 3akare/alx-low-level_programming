#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: 'print single digit numers from 0 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 11; number++)
		putchar(number);
	putchar('\n');

	return (0);
}


