#include "function_pointers.h"

/**
* array_iterator - prints an array of ints given a function
* @array: the array to print
* @size: the array length
* @action: the function to call
* ------------------------------------
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || size <= 0 || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
