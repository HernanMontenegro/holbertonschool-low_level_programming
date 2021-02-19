#include "holberton.h"

/**
* string_toupper - return string given in uppercase
* @c: the string given
* ------------------------------------
* Return: string in uppercase
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97  && c[i] <= 122)
			c[i] -= 32;
	}

	return (c);
}
