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
		printf("%08x", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf(" ");
		}
		printf(" ");
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = b[i + j];

			if (c >= 32 && c < 127)
				printf("%c", c);
			else
				printf(".");
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
