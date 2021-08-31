#include "search_algos.h"

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
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array_from_to(array, left, right);
		mid = (left + right) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * print_array_from_to - Prints an array between 2 indexes
 * @array: the array
 * @from: the starting index for printing the array
 * @to: the index where the function should stop printing
 * ---------------------------
*/
void print_array_from_to(int *array, int from, int to)
{
	int i;

	/* Printing the incoming array */
	printf("Searching in array:");
	for (i = from; i < to + 1; i++)
	{
		printf(" %d", array[i]);
		if (i != to)
			printf(",");
	}
	printf("\n");
}
