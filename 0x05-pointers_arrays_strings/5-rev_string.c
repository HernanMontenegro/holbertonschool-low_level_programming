#include "holberton.h"

/**
 * rev_string - print a string in reverse
 * @s: the string given
 * ------------------------------------
 * Return: void
 */
void rev_string(char *s)
{
int i, j, temp;

for (i = 0; s[i] != '\0'; i++)
{

}
i--;
for (j = 0; j < i; j++, i--)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
}
}
