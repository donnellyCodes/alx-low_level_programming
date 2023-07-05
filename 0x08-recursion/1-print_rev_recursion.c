#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @c: The character to be printed
 * Return: Always 0
 */
int _putchar(char c);
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
