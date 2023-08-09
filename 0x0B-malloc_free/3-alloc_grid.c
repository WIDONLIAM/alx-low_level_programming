#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Will be the nested loop to make grid of
 * @height: Is the height of the input
 * @width: Is the width of the input
 *
 * Return:  The pointer (2) dim. array
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **mee;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (mee);
}
