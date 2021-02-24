#include "holberton.h"

/**
* get_sqrt - do all roots calculations
* @n: the number to get root
* @i: the current number check
* -----------------------------------------
* Return: integer found
*/
int get_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == n)
		return (-1);
	else if (i * i != n)
	{
		return (get_sqrt(n, i + 1));
	}

	return (0);
}

/**
* _sqrt_recursion - returns the natural square root
* @n: the number given
* -------------------------------
* Return: the integer result
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_sqrt(n, 1));
}
