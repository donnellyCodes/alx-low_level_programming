#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function that prints a chessboard
 * @a: parameter
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i;

	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
