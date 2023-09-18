#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: a string
 * @needle: a substring
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	unsigned int j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
