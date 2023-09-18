#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area 2
 * @src: memory area 1
 * @n: number of bytes
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
