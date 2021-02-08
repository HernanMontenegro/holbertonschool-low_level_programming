#include "holberton.h"

/**
*
*
*/
int print_last_digit(int n)
{
	int lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
