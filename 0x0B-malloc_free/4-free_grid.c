#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Will be freeing of 2 dimension grid array
 * @height: Is the height of the 2 dimesional grid
 * @grid: Is the 2 dimesional grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

		for (i = 0; i < height)
		{
			i++;
			free(grid[i]);
		}

		free(grid);
}
