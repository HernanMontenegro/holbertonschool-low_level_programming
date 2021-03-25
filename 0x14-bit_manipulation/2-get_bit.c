#include "holberton.h"

/**
* get_bit - returns the value of a bit at index
* @n: the number to convert
* @index: specific index
* ------------------------------------
* Return: the index bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	return (((n >> index) & 1));
}
