#include "holberton.h"

/**
 *  print_diagonal - print a line with n large
 * @n: the line width
 *  ---------------------------
 *  Return: void
 */
void print_diagonal(int n)
{
int maxSpaces = n, i;

if (n <= 0)
_putchar('\n');
for (n = 0; n < maxSpaces; n++)
{
for (i = 0; i < n; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
