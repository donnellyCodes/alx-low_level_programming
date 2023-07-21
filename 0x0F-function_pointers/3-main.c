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
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') && (argv[2][0] != '-')
		&& (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')))
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	i = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
	return (0);
}
