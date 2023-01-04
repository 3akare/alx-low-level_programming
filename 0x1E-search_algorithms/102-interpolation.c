#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value)
{
    size_t low, high, mid, index, tracker = 0;

    low = 0;
    high = size - 1;
    while (low <= high)
    {
        tracker++;
        mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        
        if (array[mid] == value){
            index = mid;
            break;
        }
        else{
            if (array[mid] < value)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if (tracker > size)
        {
            printf("Value checked array[%ld] is out of range\n", mid);
            return (-1);
        }
        else
        {
            printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
        }
    }
    return (index);
}
