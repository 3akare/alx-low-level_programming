#include "main.h"

/**
 * main - prints the first 98 Fibonnacci numbers, starting
 * with 1 and 2, followed by a new line
 *
 * Return: Always Successful
 */

int main(void)
{
	unsigned long int i = 0, j = 1, temp;
    unsigned long int i_1, i_2, j_1, j_2;
    unsigned long int i_i, j_j;
	int k = 0;

	for (k = 0; k < 92; k++)
	{
        temp = i + j;
        printf("%ld, ",temp);

        i = j;
        j = temp;
	}

    i_1 = i / 10000000000;
    j_1 = j / 10000000000;
    i_2 = i % 10000000000;
    j_2 = j % 10000000000;

    for (k = 93; k < 99; k++)
    {
        i_i = i_1 + j_1;
        j_j = i_2 + j_2;
        if (i_2 + j_2 > 9999999999)
        {
            i_i += 1;
            j_j %= 10000000000;
        }

        printf("%lu%lu", i_i, j_j);
        if (k != 98)
            printf(", ");
        i_1 = j_1;
        i_2 = j_2;
        j_1 = i_i;
        j_2 = j_j;

    }
	putchar('\n');
	return (0);
}
