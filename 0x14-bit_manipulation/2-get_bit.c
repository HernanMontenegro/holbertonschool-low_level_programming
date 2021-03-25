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
	return (((n >> index) & 1));
}
