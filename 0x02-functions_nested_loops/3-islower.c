#include "main.h"
/**
 * _islower - function to check lowercase characters
 * @c: is the int that will use argument of the function
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
