#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 *                  integers using the Linear search algorithm
 * @array: the array
 * @size: the size of elements in the array
 * @value: the value to look for
 * -----------------------------------------
 * Return: the first index where value is located or -1 if fails
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, (int) array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
