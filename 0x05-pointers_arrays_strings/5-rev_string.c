#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length;

	int i;

	char tmp;

	i = 0;
	length = 0;

	while (s[i++])
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
