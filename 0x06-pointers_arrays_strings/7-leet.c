#include "holberton.h"

/**
* leet - encodes a string to 1337
* @c: the string given
* --------------------------------------
* Return: new string
*/
char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] -= 30;
	}

	return (c);
}
