#include "search_algos.h"
/**
 * binary_search - searches for a value using Binary Search algorithm
 * @array: pointer to first element in an array
 * @size: number of elements in an array
 * @value: Type of value
 * Return: Value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i, left, right, mid;

	left = 0;
	right = (int)size - 1;
	mid = left + (right - left) / 2;
	if (!array || size == 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array using
 * Exponential search algorithm
 * @array: pointer to the first element of an array
 * @size: number of elements in an array
 * @value: type of value to be searched
 * Return: value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int i, left, right;

	i = 1;
	left = i / 2;
	right = (i < size) ? i : size - 1;
	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
	{
		printf("%d\n", array[0]);
		return (0);
	}
	while (i < size && array[i] <= value)
	{
		printf("%d\n", array[i]);
		i *= 2;
	}
	return (value);
}
