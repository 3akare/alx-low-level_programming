#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print hexadecimal'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hex;
	char alpha;

	for (hex = 0; hex <= 9; hex++)
		putchar(hex);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
