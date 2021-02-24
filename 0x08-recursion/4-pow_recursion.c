#include "holberton.h"

/**
* _pow_recursion - power x to y integer
* @x: the base integer
* @y: the powered
* ------------------------------------------------
* Return: the number result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	x = x * _pow_recursion(x, y - 1);

	y--;

	return (x);
}
