#include "holberton.h"

/**
 * rev_string - print a string in reverse
 * @s: the string given
 * ------------------------------------
 * Return: void
 */
void rev_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{

}

while (i >= 0)
{
_putchar(s[i]);
i--;
}

_putchar('\n');
}
