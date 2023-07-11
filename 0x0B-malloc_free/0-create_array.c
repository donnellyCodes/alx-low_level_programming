#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: argument 1
 * @c: argument 2
 * Return: Null if size is 0, a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL); /*if allocation fails*/
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
