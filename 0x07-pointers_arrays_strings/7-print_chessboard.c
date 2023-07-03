#include "main.h"
/**
 * print_chessboard - function that prints a chessboard
 * @a: parameter
 * Return: Always 0
 */
int _putchar(char c);
void print_chessboard(char (*a)[8])
{
	int i;

	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
