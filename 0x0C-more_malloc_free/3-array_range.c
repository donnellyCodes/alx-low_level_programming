#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: lowest value
 * @max: highest value
 * Return: pointer to new array, or 0
 */
int *array_range(int min, int max)
{
	int *arr;

	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
