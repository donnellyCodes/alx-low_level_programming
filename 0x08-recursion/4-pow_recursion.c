#include "main.h"
/**
 * _pow_recursion - function to return value of x raised to the power of y
 * @x: first value
 * @y: power value
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* to indicate an error*/
	}
	else if (y == 0)
	{
		return (1); /*Base case*/
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
