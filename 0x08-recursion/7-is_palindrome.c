#include "holberton.h"

int palidrome_check(char *c, int left, int right)
{
	if (c[left] == c[right])
	{
		palidrome_check(c, left + 1, right - 1);
		return (1);
	}
	else if (c[left] != c[right])
	{
		return (0);
	}
	else if (left % 2 == 0)
        {
                return (1);
        }

	return (0);
}

/**
* my_strlen - get the length of a string
* @s:the string given
* --------------------------------
* Return: void
*/
int my_strlen(char *s)
{
	int n = 0;

	if (*s != '\0')
		n = n + my_strlen(s + 1);
	else
		return (0);

	n++;

	return (n);
}


/**
* is_palindrome - check if a given string is palindrome
* @s: the string given
* --------------------------------------------
* Return: 1 if is palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	return (palidrome_check(s, 0, (my_strlen(s) - 1)));
}
