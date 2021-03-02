#include <stdlib.h>

/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: the string given
* ------------------------------------------
* Return: a pointer
*/
char *_strdup(char *str)
{
	char *uwu;
	int i, strsize;

	if (str == NULL)
		return (NULL);

	for (strsize = 0; str[strsize]; strsize++)
	{
	}
	strsize++;
	uwu = malloc(sizeof(char) * strsize);
	if (uwu == NULL)
		return (NULL);

	for (i = 0; i < strsize; i++)
		uwu[i] = str[i];
	return (uwu);
}
