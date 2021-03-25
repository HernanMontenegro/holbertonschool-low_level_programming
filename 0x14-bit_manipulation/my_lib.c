#include "holberton.h"

/**
* isBinary - Checks if the string is a binary
* @b: the binary string
* ----------------------------------
* Return: 1 if is a valid string, 0 if not
*/
int isBinary(const char *b)
{
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (!((b[i] >= '0') && (b[i] <='1')))
			return (0);
	}

	return (1);
}

/**
 * _atoi - convert a string to it's integer value
 * @s: the string given
 * ------------------------------------
 * Return: void
 */
int _atoi(char *s)
{
	int res = 0, sign = 1, i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int firstDigit_encounter = 0;

		if(s[i] == ';')
		break;
		if(s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			firstDigit_encounter = 1;
		}

		if(firstDigit_encounter == 1)
		{
			if(s[i - 1] == '-')
				sign = -1;
		}
	}

	return sign * res;
}

/**
 * _strlen - return the length of the string
 *@s: string
 * ------------------------
 * Return: void.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}
