#include "holberton.h"

/**
* print_number - prints an integer
* @n: the integer given
* --------------------------------------
* Return: void
*/
void print_number(int n)
{
	unsigned i = 0;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	 _putchar((i % 10) + '0');

}
