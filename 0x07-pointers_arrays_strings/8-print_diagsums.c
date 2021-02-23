#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - print a matrix diags sum
* @a: the matrix pointer given
* @size: the size of the matrix
* ------------------------------------
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
	}
	for (i = 1; i <= size; i++)
	{
		sum2 += *(a + (i * size - i));
	}

	printf("%d, %d\n", sum1, sum2);
}
