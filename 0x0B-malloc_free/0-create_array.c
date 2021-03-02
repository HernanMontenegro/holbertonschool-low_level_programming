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
	unsigned int i, length;

	length = sizeof(char) * size;
	str = malloc(length);

	if (!str || size == 0)
		return (NULL);

	for (i = 0; i < length; i++)
		str[i] = c;

	return (str);
}
