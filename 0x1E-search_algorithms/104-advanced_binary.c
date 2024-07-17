#include "search_algos.h"

/**
 * binary_rec - function that searches for value of sorted array
 * of integers using recursion
 * @array: pointer to the first element of an array
 * @left: size_t element located at the left side
 * @right: size_t element located at the right side
 * @value: type of value to be searched
 * Return: value or -1
 */
int binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");

	i = left;
	while (i < right)
	{
		printf("%d,", array[i]);
		++i;
	}
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_rec(array, left, i - 1, value));
	return (binary_rec(array, i + 1, right, value));
}
/**
 * advanced_binary - unction that searches for a value in
 * a sorted array of integers
 * @array: pointer to the first element of an array
 * @size: number of elements in an array
 * @value: type of value tpo search for
 * Return: value, -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_rec(array, 0, size - 1, value));
}
