#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - contains main function
 * @argc: argument count
 * @argv: argument variable
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*func)(int, int);

	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	func = get_op_func(operator);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
