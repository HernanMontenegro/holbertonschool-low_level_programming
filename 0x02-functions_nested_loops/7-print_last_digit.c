#include "holberton.h"

/**
* print_last_digit - return the last digit of the number given
* @n: equal the number given
* ---------------------------------
* Return: the last digit of the number given
*/
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	return (n % 10);
}
