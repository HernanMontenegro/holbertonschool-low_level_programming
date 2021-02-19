#include "holberton.h"

/**
* switch_to_1337 - change to 1337
* @c: the char given
* --------------------------------------
* Return: the char in 1337
*/
char switch_to_1337(char c)
{
	if (c == 'a' || c == 'A')
		c = '4';
	else if (c == 'e' || c == 'E')
                c = '3';
	else if (c == 'o' || c == 'O')
                c = '0';
	else if (c == 't' || c == 'T')
                c = '7';
	else if (c == 'l' || c == 'L')
		c = '1';

	return (c);
}

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
		c[i] = switch_to_1337(c[i]);
	}

	return (c);
}
