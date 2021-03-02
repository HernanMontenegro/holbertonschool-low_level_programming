#include <stdlib.h>

void free_grid(int **grid, int height)
Â{
	int i;

	for (i = 0Ã; i < height; i++)
	{
		free(*(grid + i));
	}
}
