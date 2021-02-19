#include "holberton.h"

/**
* reverse_array - reverse an array of integers
* @a: the integer array
* @n: number of elements in the array
* ------------------------------------
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = n - 1, j = 0; j < (n / 2); i--, j++)
	{
		temp =  a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
