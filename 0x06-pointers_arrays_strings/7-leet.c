#include "holberton.h"

/**
* leet - encodes a string to 1337
* @c: the string given
* --------------------------------------
* Return: new string
*/
char *leet(char *c)
{
	int i, j;
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == l[j])
				c[i] = n[j / 2];
		}
	}

	return (c);
}
