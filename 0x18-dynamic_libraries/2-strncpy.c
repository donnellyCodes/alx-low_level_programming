#include "main.h"
/**
 * _strncpy -  function that copies a string
 * @dest: new string
 * @src: copied string
 * @n: string characters
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
