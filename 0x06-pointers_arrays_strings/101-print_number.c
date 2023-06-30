#include "main.h"
/**
 * print_number - function to print integers
 * @n: integer to be printed
 * Return: Always 0
 */
int _putchar(char c);
void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
