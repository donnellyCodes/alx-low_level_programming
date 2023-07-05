#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: input integer
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /*Returns -1 to indicate error*/
	}
	else if (n == 0)
	{
		return (1); /*Base case:factorial of 0 is 1*/
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
