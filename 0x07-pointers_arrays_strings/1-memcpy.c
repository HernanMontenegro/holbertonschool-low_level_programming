#include "holberton.h"

/**
* _memset - fills memory with a constant byte
* @dest: the buffer destination
* @src: the buffer source
* @n: first bytes to copy
* ------------------------------------------------
* Return: char pointer "dest"
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
