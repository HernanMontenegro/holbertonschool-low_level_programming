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
	unsigned int last_digit;
	unsigned int entry_num;
	unsigned int conversion;
	unsigned int base = 1;
	unsigned int temp;

	if (!b || !isBinary(b))
		return (0);

	entry_num = _atoi(str);
	conversion = 0;
	temp = entry_num;

	while (temp)
	{
		last_digit = temp % 10;
		temp = temp / 10;

		conversion += last_digit * base;

		base *= 2;
	}

	return (conversion);
}
