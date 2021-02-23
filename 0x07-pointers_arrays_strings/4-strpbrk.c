#include "holberton.h"

/**
* _strspn - locate the first occurrence of accept in s
* @s: the string to scan
* @accept: bytes to check
* ------------------------------------------------
* Return: char pointer "s"
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}

	if (s[i] == accept[j])
	{
		p = &s[i];
		return (p);
	}

	return (p);
}
