#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements
 * @a: first integer pointer
 * @n: second integer
 * ------------------------------------
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
