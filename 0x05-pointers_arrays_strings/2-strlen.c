#include "main.h"
/**
 * _strlen - function that returns length of a string
 * @s: The string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
