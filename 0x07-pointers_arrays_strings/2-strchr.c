#include "holberton.h"

/**
* _strchr - locate a character in a string
* @s: the memory direction
* @c: the character to find
* ------------------------------------------------
* Return: char pointer "s"
*/
char *_strchr(char *s, char c)
{
	int i;
	char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}

	return (p);
}
