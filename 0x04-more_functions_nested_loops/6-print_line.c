#include "main.h"
/**
 * print_line - prints a straight line
 * @n: parameter
 * Return: Always 0
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
