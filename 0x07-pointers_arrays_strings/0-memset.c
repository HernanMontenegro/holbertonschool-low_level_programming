#include "holberton.h"

/**
* _memset - fills memory with a constant byte
* @s: the memory direction
* @b: the byte
* @n: first bytes to fil
* ------------------------------------------------
* Return: char pointer "s"
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n, s[i] != '\0'; i++)
	{
		s[i] = b;
	}

	return (s);
}
