#include "holberton.h"

/**
*
*
*/
int print_last_digit(int n)
{
	int lastDigit;
	if (n < 0)
		n = -n;
	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
