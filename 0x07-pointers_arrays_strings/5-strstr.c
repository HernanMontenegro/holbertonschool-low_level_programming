#include "holberton.h"

/**
* _strstr - locate substring in a string
* @haystack: the string to scan
* @needle: the substring
* ------------------------------------------------
* Return: char pointer "p"
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p = &haystack[0];

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
				hasEncountered = 1;
			else
			{
				hasEncountered = 0;
				break;
			}
		}

		if (hasEncountered == 1)
		{
			p = &haystack[i];
			return (p);
		}
	}

	return (0);
}
