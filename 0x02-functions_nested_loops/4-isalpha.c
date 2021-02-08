#include "holberton.h"
#include <ctype.h>

/**
*
*
*/
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
