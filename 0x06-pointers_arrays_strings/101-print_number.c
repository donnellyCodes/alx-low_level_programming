#include "main.h"
/**
 * print_number - function to print integers
 * @n: integer to be printed
 * Return: Always 0
 */
int _putchar(char c);
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
