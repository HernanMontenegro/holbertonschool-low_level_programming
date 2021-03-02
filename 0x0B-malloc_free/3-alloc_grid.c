#include <stdlib.h>

/**
*
*/
int **alloc_grid(int width, int height)
{
	if (width < 0 || height < 0)
		return (NULL);

	int i, j;
	int **grid;

	grid = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (!grid[i])
			{
				for (; i>= 0; i--)
				{
					free(grid[i]);
				}
				return (NULL);
			}
		}
	}

	return (grid);
}
