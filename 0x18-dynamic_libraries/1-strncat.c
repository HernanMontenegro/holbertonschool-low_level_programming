#include "holberton.h"

/**
* _strncat - concatenate two strings depending on bytes
* @dest: the string destination
* @src: the string source
* @n: the max bytes to concatenate
* ------------------------------------
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int endOfDest, countSrc, i;

for (countSrc = 0; src[countSrc] != '\0'; countSrc++)
{
}
for (endOfDest = 0; dest[endOfDest] != '\0'; endOfDest++)
{
}
for (i = 0; dest[endOfDest] <= countSrc && i < n; endOfDest++, i++)
{
dest[endOfDest] = src[i];
}

return (dest);
}
