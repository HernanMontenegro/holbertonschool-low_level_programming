#include <stdlib.h>

/**
* _calloc - allocate memory for an array
* @nmemb: number of elements
* @size: bytes for each element
* --------------------------------------------
* Return: void pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (!p)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		p[i] = 0;

	return (p);
}
