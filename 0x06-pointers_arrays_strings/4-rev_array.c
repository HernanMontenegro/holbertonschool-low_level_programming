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
    int i, j;

    for (i = n, j = 0; i >= 0; i--, j++)
    {
        a[j] = a[i];
    }
}
