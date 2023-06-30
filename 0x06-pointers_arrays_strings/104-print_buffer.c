#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * @size: size of byte
 * @b: byte
 * Return: Always 0
 */
void print_buffer(char *b, int size)
{
	int i;

	int j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf(" ");
			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= ' ' && b[i + j] <= '~')
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
