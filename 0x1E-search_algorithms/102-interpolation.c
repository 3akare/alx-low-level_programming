#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in sorted array of integers
 * using interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: is the number og elements in array
 * @value: The value to be found
 *
 * Return: The first index where value is located on success, and -1 on fail
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid = 0;
	
	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (mid < size)
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
int main(void)
{
    int array[] = {
        0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));
    return (EXIT_SUCCESS);
}
