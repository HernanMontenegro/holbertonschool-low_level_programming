#include "holberton.h"

/**
 *  _isdigit - check if the char given is a digit or not
 *  @c: the character given
 *  ---------------------------
 *  Return: 1 if is a digit or 0 if not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
