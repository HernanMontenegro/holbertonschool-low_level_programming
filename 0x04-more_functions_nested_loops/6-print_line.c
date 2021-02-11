#include "holberton.h"

/**
 *  print_line - print a line with n large
 * @n: the line width
 *  ---------------------------
 *  Return: void
 */
void print_line(int n)
{
int i, maxWidth = n;

for (i = 0; i <= maxWidth; i++)
{
if(i == 0)
continue;
_putchar('_');
}
_putchar('\n');
}
