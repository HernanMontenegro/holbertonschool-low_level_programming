#include "holberton.h"

/**
* rot13 - encodes a string to rot13
* @c: the string given
* --------------------------------------
* Return: new string
*/
char *rot13(char *c)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (c[i] == alphabet[j])
			{
				c[i] = rot[j];
				break;
			}
		}
	}

	return (c);
}
