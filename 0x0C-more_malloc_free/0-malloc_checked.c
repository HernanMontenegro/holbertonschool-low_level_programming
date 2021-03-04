#include <stdlib.h>

/**
* malloc_checked - allocate memory using malloc
* @b: memory size
* ---------------------------------
* Return: pointer to that memory adress
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		b = 98;
		exit(b);
	}

	return (p);
}
