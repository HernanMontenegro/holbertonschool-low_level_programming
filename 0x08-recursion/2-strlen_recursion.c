#include "holberton.h"

/**
* _strlen_recursion - get the length of a string
* @s:the string given
* --------------------------------
* Return: void
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
		n = n + _strlen_recursion(s + 1);
	else
		return (0);

	n++;

	return (n);
}
