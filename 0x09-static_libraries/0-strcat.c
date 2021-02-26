#include "holberton.h"

/**
* _strcat - concatenate two strings
* @dest: the string destination
* @src: the string source
* ------------------------------------
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int endOfDest, countSrc, i;

for (countSrc = 0; src[countSrc] != '\0'; countSrc++)
{
}
for (endOfDest = 0; dest[endOfDest] != '\0'; endOfDest++)
{
}
for (i = 0; dest[endOfDest] <= countSrc; endOfDest++, i++)
{
dest[endOfDest] = src[i];
}

return (dest);
}
