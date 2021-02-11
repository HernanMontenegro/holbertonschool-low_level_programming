#include "holberton.h"

/**
 *  _isupper - check if the char given is uppercase or not
 *  @c: the character given
 *  ---------------------------
 *  Return: 1 if is uppercase or 0 if not
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
