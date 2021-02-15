#include "holberton.h"

/**
 * puts_half - prints half of the string given
 * @str: the string given
 * ------------------------------------
 * Return: void
 */
void puts_half(char *str)
{
int i, j, n;

for (i = 0; str[i] != '\0';i++)
{
}

if (i % 2 != 0)
{
n =  ((i - 1) / 2);
}
else
{
n = i / 2;
}

for (j = n; j <= i; j++)
{
_putchar(str[j]);
}

_putchar('\n');
}
