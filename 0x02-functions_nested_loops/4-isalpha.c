#include "holberton.h"

/**
* _isalpha - detect if the character given is in the alphabet or not
* @c: equal the character given
* ---------------------------------
* Return: 1 if the character given is in the alphabet, 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
