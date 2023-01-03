#include "search_algos.h"
#include <stdlib.h>

/**
 * print_array - Prints out the conentent of an array of integers
 * @low: Lowest index of the array
 * @high: Highest index of the array
 * @array: A pointer to an array of integers
 */

void print_array(int *array, int low, int high)
{
	int i;

	for (i = low; i < high + 1; i++)
	{
		printf("%d", array[i]);
		if (i == high)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - Searches for a value ina an array of integers using
 * the binary_search algorithm
 * @array: A pointer to an array of numbers
 * @size: Size of the array of numbers
 * @value: Value to be found
 *
 * Return: Index of value on succes, (-1) on fail
 */


int binary_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0, mid;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		mid = low + ((high - low) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
