#include <stdlib.h>
#include <stdio.h>

/**
*
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
	s1_len++;
	s2_len++;

	if (n > s2_len)
		n = s2_len;

	str = malloc(sizeof(char) * s1_len - 1 + n);
	if (!str)
		return (NULL);

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		str[s1_len] = s1[s1_len];
	s1_len++;
	str[s1_len] = '\0';

	for (i = s1_len, j = 0; j <= n; i++, j++)
	{
		str[i] = s2[j];
	}

	return (str);
}
