#include "holberton.h"

/**
*  print_triangle - print a triangle with a flexible size
* @size: the triangle size
* ---------------------------
* Return: void
*/
void print_triangle(int size)
{
int maxSize = size, i, spaces, j, k;

if (size <= 0)
_putchar('\n');
for (i = 1; i <= maxSize; i++)
{
spaces = maxSize - i;
for (j = 1; j <= spaces; j++)
{
_putchar(' ');
}
for (k = 1; k <= maxSize - spaces; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
