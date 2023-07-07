#include "main.h"
#include <stddef.h>
/**
 * _strchr - functio to locate character in a string
 * @s: a string
 * @c: a character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
