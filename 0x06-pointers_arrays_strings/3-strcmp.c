#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
* ------------------------------------
* Return: void
*/
int _strcmp(char *s1, char *s2)
{
int i, s1_length, s2_length, maximum, res = 0;

for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
{
}
for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
{
}

if (s1_length >= s2_length)
maximum = s1_length;
else
maximum = s2_length;

for (i = 0; i < maximum; i++)
{
if (s1[i] != s2[i])
{
res = s1[i] - s2[i];
break;
}
}

return (res);
}
