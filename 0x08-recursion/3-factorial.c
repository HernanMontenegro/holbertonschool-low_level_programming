#include "holberton.h"

/**
* factorial - calculates the factorial of an integer
* @n: the factorial to calculate
* -------------------------------------
* Return: the factorial integer
*/
int factorial(int n)
{
	if (n > 0)
		n = n * factorial(n - 1);
	else if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n);
}
