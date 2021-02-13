#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: the string given
 * ------------------------------------
 * Return: void
 */
void print_rev(char *s)
{
int i, count;

for (i = 0; s[i] != '\0'; i++)
{
count++;
}

while (count >= 0)
{
_putchar(s[count]);
count--;
}

_putchar('\n');
}
