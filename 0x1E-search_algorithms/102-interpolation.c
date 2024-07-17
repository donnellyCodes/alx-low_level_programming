#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to first element of an array
 * @size: number of elements in an array
 * @value: type of value to search for
 * Return: Value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		i = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			high = i - 1;
		}
		else
		{
			low = i + 1;
		}
	}
	return (-1);
}
