#include "holberton.h"

/**
 *  print_square - print a square with a flexible size
 * @size: the square size
 * ---------------------------
 * Return: void
 */
void print_square(int size)
{
int maxSize = size, i;

if (size <= 0)
_putchar('\n');
for (size = 1; size <= maxSize; size++)
{
for (i = 1; i <= maxSize; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
