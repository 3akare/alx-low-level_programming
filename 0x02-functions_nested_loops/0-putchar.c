#include <stdio.h>
#include <unistd.h>

/**
 * main - print _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[8] = "_putchar";

	printf("%s", str);
	putchar('\n');
	return (0);
}
