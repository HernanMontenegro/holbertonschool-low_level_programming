#include <stdlib.h>

/**
*
*
*
*/
int *array_range(int min, int max)
{
	int i, *res, between;

	if (min > max)
		return (NULL);

	between = max - min;
	between++;

	res = malloc(sizeof(int) * between);
	if (!res)
		return (NULL);

	for (i = 0; i <= between; i++, min++)
		res[i] = min;

	return (res);
}
