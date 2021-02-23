#include "holberton.h"

/**
* infinite_add - adds two numbers
* @n1: the first number
* @n2: the second number
* @r: store the result
* @size_r: the size
* -----------------------------------
* Return: pointer with the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; i <= size_r; i++)
	{
		r[i] = ((n1[i] - '0') + (n2[i] - '0')) + '0';
	}

	return (r);
}
