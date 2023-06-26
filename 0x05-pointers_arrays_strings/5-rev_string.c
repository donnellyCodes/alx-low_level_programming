#include "main.h"
#include <unistd.h>
/**
 * rev_string - function to reverse string
 * @s: string to be reversed
 * Return: Always 0
 */
int _putchar(char c);
void rev_string(char *s)
{
	int length;

	int i;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
