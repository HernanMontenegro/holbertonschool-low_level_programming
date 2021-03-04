#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - concatenate two strings
* @s1: first string
* @s2: second string
* @n: amount of chars to concatenate
* ---------------------------------------
* Return: pointer to a new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, j;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
	}
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{
	}

	if (n > s2_len + 1)
		n = s2_len + 1;

	str = malloc(sizeof(char) * s2_len + n + 1);
	if (!str)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];

	for (j = 0; j < n; i++, j++)
		str[i] = s2[j];

	return (str);
}
