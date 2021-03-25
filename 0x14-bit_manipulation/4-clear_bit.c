#include "holberton.h"

/**
*
*
*
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, put = 1;

	size = sizeof(*n) * 8;

	if (index > size)
		return (-1);

	put = ~(put << index);

	*n = (*n & put);

	return (1);
}
