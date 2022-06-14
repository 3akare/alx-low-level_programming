#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - password key generator
 *
 * Description: 'a program that generates random valid passwords'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, n = 0;

	srand((unsigned int) time(NULL));
	int numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$%&";
	char password[10];

	n = rand() % 4;

	for (i = 0; i < 10; i++)
	{
		if (n == 1)
		{
			password[i] = numbers[rand() % 10];
			n = rand() % 4;
			printf("%c", password[i]);
		}
		else if (n == 2)
		{
			password[i] = letter[rand() % 26];
			n = rand() % 4;
			printf("%c", password[i]);
		}
		else if (n == 3)
		{
			password[i] = LETTER[rand() % 26];
			n = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = symbols[rand() % 6];
			n = rand() % 4;
			printf("%c", password[i]);
		}
	}
	putchar('\n');
}
