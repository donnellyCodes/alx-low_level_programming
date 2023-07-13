#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: argument one
 * @size: argument two
 * Return: a pointer, NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_mem;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new_mem = malloc(nmemb * size);
	if (new_mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		new_mem[i] = 0;
	return ((void *)new_mem);
}
