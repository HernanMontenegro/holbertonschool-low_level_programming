#include "holberton.h"
#include "my_lib.c"

void _reworked_putchar(unsigned long int m)
{
	_putchar((m % 2) + '0');
}

void print_process(unsigned long int n, long int *rec)
{
	unsigned long int m = n;

	if (n == 0 && *rec == 0)
	{
		_putchar('0');
		return;
	}

	*rec = *rec + 1;

	if (m * 0.5)
	{
		print_process(m * 0.5, rec);
	}

	if (m * 0.5)
		_reworked_putchar(m);
}

/**
* print_binary - prints in binary the number given
* @n: the number to be converted
* ------------------------------------
* Return: void
*/
void print_binary(unsigned long int n)
{
        long int recursion_time = 0;
        long int *rec = &recursion_time;

        print_process(n, rec);
}
