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
	int entry_num = _atoi(str);
	int conversion = 0;
	int last_digit;
	int base = 1;
	int temp = entry_num;

	if (!b || !isBinary(b))
		return (0);

	while (temp)
	{
		last_digit = temp % 10;
		temp = temp / 10;

		conversion += last_digit * base;

		base *= 2;
	}

	return (dec_value);
}
