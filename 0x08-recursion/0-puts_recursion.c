#include "holberton.h"

/**
* _puts_recursion - prints a string with a new line
* @s:the string given
* --------------------------------
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
