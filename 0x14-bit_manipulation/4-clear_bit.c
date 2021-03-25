#include "holberton.h"

/**
* clear_bit - puts a bit in 0
* @n: the number to operate
* @index: the bit index to modify
* ------------------------------------------
* Return: modified value
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
