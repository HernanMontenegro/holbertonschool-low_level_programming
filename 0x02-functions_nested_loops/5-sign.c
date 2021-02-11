#include "holberton.h"

/**
* print_sign - check the sign of the given number
* @n: equal the number given
* ---------------------------------
* Return: 1 if the given is positive, 0 if is 0 and -1 if is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
