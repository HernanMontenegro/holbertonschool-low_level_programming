#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string given
 * ------------------------------------
 * Return: void
 */
void puts2(char *str)
{
int i, count;

for (count = 0; str[count] != '\0'; count++)
{

}
for (i = 0; i < count-1; i++)
{
if(i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
