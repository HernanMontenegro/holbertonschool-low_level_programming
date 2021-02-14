#include "holberton.h"

/**
 * _strcpy - copy string
 * @dest: the string copy to make
 * @src: the string source
 * ------------------------------------
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int array_length, j;
for (array_length = 0; src[array_length] != '\0'; array_length++)
{

}

for (j = 0; j < array_length; j++)
dest[j] = src[j];

return (dest);
}
