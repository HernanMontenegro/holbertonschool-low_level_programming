#include "holberton.h"

/**
* print_last_digit - return the last digit of the number given
* @n: equal the number given
* ---------------------------------
* Return: the last digit of the number given
*/
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
