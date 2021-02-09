#include "holberton.h"

/**
* print_last_digit - return the last digit of the number given
* @n: equal the number given
* ---------------------------------
* Return: the last digit of the number given
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
