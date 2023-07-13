#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	int j;

	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
