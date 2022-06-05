#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints the alphabets in lower and uppercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char beta;
	char alpha;


	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (beta = 'A'; beta <= 'Z'; beta++)
		putchar(beta);
	putchar('\n');

	return (0);
}
