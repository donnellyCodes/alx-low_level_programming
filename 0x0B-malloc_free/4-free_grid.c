#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @height: height of grid
 * @grid: argument
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
