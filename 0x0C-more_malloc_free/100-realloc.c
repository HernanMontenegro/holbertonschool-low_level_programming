#include <stdlib.h>

/**
* _realloc - reallocate memory
* @ptr: the pointer given
* @old_size: the old size in memory
* @new_size: the memory addition
* ----------------------------------------
* Return: pointer with new allocation
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, target;
	char *p, *tempPTR;

	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		target = old_size;
	else
		target = new_size;

	tempPTR = ptr;

	p = malloc(new_size);
	if (!p)
		return (NULL);

	for (i = 0; i < target; i++)
		p[i] = tempPTR[i];

	free(ptr);
	return (p);
}
