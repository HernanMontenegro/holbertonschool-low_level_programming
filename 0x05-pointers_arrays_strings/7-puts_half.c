#include "holberton.h"

/**
 * puts_half - prints half of the string given
 * @str: the string given
 * ------------------------------------
 * Return: void
 */
void puts_half(char *str)
{
int i, j, length_of_the_string, count;

for (i = 0; str[i] != '\0'; i++)
{
length_of_the_string++;
}

if (length_of_the_string % 2 == 0)
count = i / 2;
else
count = (i - 1) / 2;

for (j = count; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
