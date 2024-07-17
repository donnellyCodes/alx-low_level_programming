#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * using Jump search algorithm
 * @array: pointer to the first element of an array
 * @size: number of elements
 * @value: type of value to be searched
 * Return: Value, -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, n, p;

	if (!array || size == 0)
		return (-1);

	for (n = sqrt(size); i < size; i += n)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - n, i);
	for (p = i - n; p < size && p <= i; p++)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}
	return (-1);
}
