#include "holberton.h"

/**
* cap_string - convert lowercase first letter from a separator
* @c: the string given
* ---------------------------------------
* Return: new string
*/
char *cap_string(char *c)
{

	unsigned int  i, j;
	char s[] = {32, '\t', '\n', ',', 59, 46, 33, 63, 61, '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(s); j++)
		{
			if (c[i] == s[j] && c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] -= 32;
				break;
			}
		}
	}

	return (c);
}
