#include "main.h"
/**
 * main - 2-alphabet_x10
 * description - a function that prints 10 times the alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;

	char i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
