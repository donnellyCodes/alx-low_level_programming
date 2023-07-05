#include "main.h"
/**
 * _puts_recursion -  function that prints a string
 * @c: the character to print
 * Return: Always 0
 */
int _putchar(char c);
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
