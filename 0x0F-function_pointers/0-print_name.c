#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - functio that prints a name
 * @name: name argument
 * @f: is a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
