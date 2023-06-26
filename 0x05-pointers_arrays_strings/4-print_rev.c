#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: Always 0
 */
int _putchar(char c);
void print_rev(char *s)
{
	int x, y, len;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	len = x;

	for (y = len - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
