#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count for char
 * @argv: argument vector for char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (EXIT_SUCCESS);
}
