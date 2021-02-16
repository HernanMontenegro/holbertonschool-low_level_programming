#include "holberton.h"
#include "2-strlen.c"
/**
* puts_half - prints every other character of a string.
*
* @str: input string
*/
void puts_half(char *str)
{
int ln = _strlen(str);
int ln2 = ln / 2;
int s = 0;

if (ln % 2 != 0)
{
ln2 = (ln + 1) / 2;
}

while (s[str + ln2] != '\0')
{
_putchar(s[str + ln2]);
str++;
}
_putchar(10);
}
