#include "holberton.h"
#include "my_lib.c"

/**
* print_process - prints recursively using bitware ops
* @n: number to compute
* @rec: keep track of recursive times
* ---------------------------------------------
* Return: void
*/
void print_process(unsigned long int n, long int *rec)
{
	unsigned long int m = n;

	if (n == 0 && *rec == 0)
	{
		_putchar('0');
		return;
	}

	*rec = *rec + 1;

	/* Is the same as divide by 2  */
	if (m >> 1)
	{
		print_process(m >> 1, rec);
	}

	/* Is the same as % 2 */
	_putchar((m & 1) + '0');
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
