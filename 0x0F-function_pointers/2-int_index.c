#include "function_pointers.h"

/**
* int_index - return the array index with the value searched
* @array: the integer array given
* @size: the array size
* @cmp: the function to call
* ------------------------------------------
* Return: the index with the number found, -1 if fails
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
