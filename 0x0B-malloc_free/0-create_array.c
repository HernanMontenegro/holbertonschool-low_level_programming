#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array with an specific char
* @size: the size of the array
* @c: the char for each position
* ------------------------------------------------------
* Return: a char array
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	str = malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < (sizeof(char) * size); i++)
	{
		str[i] = c;
	}

	return (str);
}
