#include "main.h"
#include <unistd.h>
/**
 * print_numbers - functions prints numbers for 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int digit = 48;

	for (digit = 48; digit < 58; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
