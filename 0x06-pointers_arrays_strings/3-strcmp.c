#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
* ------------------------------------
* Return: void
*/
int _strcmp(char *s1, char *s2)
{
	int i, s1_length, s2_length, res = 0;
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
	{
		
	}


	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	return (res);
}
