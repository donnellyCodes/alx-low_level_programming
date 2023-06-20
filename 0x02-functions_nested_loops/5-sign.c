#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: is used as a variable
 *
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
