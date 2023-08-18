#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: a pointer to the 2D array that was returned
 * by the alloc_grid function
 * @height: the row of the 2D array
 *
 * Return: Always void.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
