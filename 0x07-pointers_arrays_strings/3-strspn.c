#include "holberton.h"

/**
* _strchr - locate a character in a string
* @s: the string to scan
* @accept: bytes to check
* ------------------------------------------------
* Return: char pointer "s"
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[0])
		{
			p = &s[i];
			break;
		}
	}

	return (p);
}
