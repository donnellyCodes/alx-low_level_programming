#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints opcodes of the program
 * @a: address
 * @n: number of bytes
 * Return: Nothing
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - prints opcodes in main function
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
