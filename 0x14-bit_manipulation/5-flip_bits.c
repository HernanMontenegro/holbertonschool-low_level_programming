#include "holberton.h"

/**
* flip_bits - returns the number of bits you need to flip for reach other
* @n: the start number
* @m: the target
* ---------------------------------------
* Return: the number of flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = m ^ n, res = 0;
	int sum = 0;

	while (1 == 1)
	{
		res = xor & 1;
		if (res)
			sum++;

		if (!xor)
			break;

		xor = xor >> 1;
	}

	return (sum);
}
