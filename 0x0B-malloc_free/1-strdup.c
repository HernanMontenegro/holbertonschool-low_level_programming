#include <stdlib.h>

/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: the string given
* ------------------------------------------
* Return: a pointer
*/
char *_strdup(char *str)
{
	char *strcopy;
	int i;

	strcopy = malloc(sizeof(str));

	if (!strcopy || !str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		strcopy[i] = str[i];

	return (strcopy);
}
