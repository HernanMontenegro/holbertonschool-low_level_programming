#include <stdlib.h>

/**
* alloc_grid - alloc a grid
* @width: the grid width
* @height: the grid height
* ------------------------------------
* Return: void
*/
int **alloc_grid(int width, int height)
{
	if (width < 0 || height < 0)
		return (NULL);

	int i;
	int **grid;

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			return (NULL);
		}
	}

	return (grid);
}
