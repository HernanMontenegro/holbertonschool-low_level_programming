#include "holberton.h"

/**
* _islower - detect if the character given is in lowercase or uppercase
* @c: equal the character given
* ---------------------------------
* Return: 1 if the character given is in lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
