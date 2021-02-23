#include "holberton.h"

/**
* _strspn - locate characters in a string
* @s: the string to scan
* @accept: bytes to check
* ------------------------------------------------
* Return: char pointer "s"
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int hasFound = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				hasFound = 1;
				length++;
			}
		}

		if (hasFound == 0)
			break;
	}


	return (length);
}
