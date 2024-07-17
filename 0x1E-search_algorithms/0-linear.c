#include "search_algos.h"
/**
 * linear_search - searches for a value using linear cearch algorithm
 * @array: pointer to the first element in an array
 * @size: number of elements in an array
 * @value: type of value to be searched
 * Return: Value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
