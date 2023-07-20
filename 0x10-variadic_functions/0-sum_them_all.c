#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns sum of its parameters
 * @n: argument
 * Return: Always 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	/*Declaring a pointer to argument list*/
	va_list args;
	/*Initializing argument to list pointer*/
	va_start(args, n);
	for (i = 0; i < n; i++)
		/*Accessing current variable and pointing to the next one*/
		sum += va_arg(args, int);
	/*Ending argument*/
	va_end(args);
	return (sum);
}
