#include "search_algos.h"
int binary_recursive(int *array, int value, size_t left, size_t right);

/**
 * binary_search - searches for a value in an array of
 *                  integers using the binary search algorithm
 * @array: the array
 * @size: the size of elements in the array
 * @value: the value to look for
 * -----------------------------------------
 * Return: the first index where value is located or -1 if fails
*/
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recursive(array, value, 0, size - 1));
}

/**
 * binaryRecursive - The recursive way
 * @array: the array
 * @value: the value to look for
 * @left: the most left index of the array
 * @right: the most right index of the array
 * ---------------------------
 * Return: The index where the value is located
*/
int binary_recursive(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

	if (left > right)
		return (-1);

	/* Printing the incoming array */
	printf("Searching in array:");
	for (i = 0; i < right + 1; i++)
	{
		printf(" %d", array[i]);
		if (i != right)
			putchar(',');
	}
	putchar('\n');

	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);
	else if (value < array[mid])
		return (binary_recursive(array, value, left, mid - 1));
	else
		return (binary_recursive(array, value, mid + 1, right));
}
