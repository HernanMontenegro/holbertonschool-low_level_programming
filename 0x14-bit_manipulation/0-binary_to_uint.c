#include "holberton.h"
#include "my_lib.c"

/**
* binary_to_uint - converts a binary string to int
* @b: the string
* ---------------------------
* Return: the binary as an integer
*/
unsigned int binary_to_uint(const char *b)
{
	char *str = (char *) b;
	unsigned int conversion = 0, base = 1;
	int i;

	if (!b || !isBinary(b))
		return (conversion);

	for (i = _strlen(str) - 1; i >= 0; i--)
	{
		conversion += (str[i] - '0') * base;
		base *= 2;
	}

	return (conversion);
}
