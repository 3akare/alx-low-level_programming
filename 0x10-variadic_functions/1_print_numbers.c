#include " variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers  - prints numbers, followed by a new line
 *
 * @seperator: seperates the strings
 * @n: the numeber of intergers passed
 * 
 * Return: always success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperatoe != NULL)
			printf("%s", seperator);
	}
	printf('\n');
	va_end(nums);
}
