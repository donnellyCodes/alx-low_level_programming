#include "main.h"
/**
 * print_most_numbers - function that prints numbers for 0 to 9
 * apart from 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if (digit != 50 && digit != 52)
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
