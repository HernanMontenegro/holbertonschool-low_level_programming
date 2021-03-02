#include <stdlib.h>

/**
* str_concat - concatenate two strings
* @s1: first string
* @s2: second string
* ---------------------------------
* Return: char pointer concatenated
*/
char *str_concat(char *s1, char *s2)
{
	char *fallout;
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	fallout = malloc(sizeof(char) * i + j + 1);
	if (!fallout)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		for (; s1[i] != '\0'; i++)
			fallout[i] = s1[i];
	}
	if (s2)
	{
		for (; s2[j] != '\0'; j++)
			fallout[i + j] = s2[j];
	}
	if (!s1 && !s2)
		*fallout = "";

	return (fallout);
}
