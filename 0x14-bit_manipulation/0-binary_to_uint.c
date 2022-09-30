#include "main.h"

/**
 * binary_to_uint - converts string of 1's and 0's to decimal
 * @b: the string to be converted
 *
 * Return: Always succesfully
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i = 0, sum = 0;

	if (!b)
		return (0);

	len = strlen(b) - 1;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				sum += (1 * (1 << (len - i)));
			}
			else
			{
				sum += 0;
			}
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (sum);
}

int main(void)
{
	printf("%d\n", binary_to_uint("101"));
}
