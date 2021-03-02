#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*/
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < (sizeof(char) * size); i++)
	{
		str[i] = c;
	}

	return(str);
}
