#include "holberton.h"

/**
* set_bit - sets the value of a bit to 1 at an index
* @n: the number pointer to modify
* @index: the index to modify
* ----------------------------------------------
* Return: the changed num
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, put = 1;

	size = sizeof(*n) * 8;

	if (index > size)
		return (-1);

	put = put << index;

	*n = (*n | put);

	return (1);
}
