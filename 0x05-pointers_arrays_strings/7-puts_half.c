#include "holberton.h"

/**
 * puts_half - prints half of the string given
 * @str: the string given
 * ------------------------------------
 * Return: void
 */
void puts_half(char *str)
{
int length_of_the_string, j, n;

for (length_of_the_string = 0; str[length_of_the_string] != '\0'; length_of_the_string++)
{

}

if (length_of_the_string % 2 == 0)
n = length_of_the_string / 2;
else
n = (length_of_the_string - 1) / 2;

length_of_the_string--;
for (j = n; j <= length_of_the_string; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
