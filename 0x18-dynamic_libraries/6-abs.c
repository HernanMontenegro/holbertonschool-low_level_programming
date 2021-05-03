#include "holberton.h"

/**
* _abs - return the number given with it's absolute value
* @n: equal the number given
* ---------------------------------
* Return: -n if the number given is negative, n if not
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
