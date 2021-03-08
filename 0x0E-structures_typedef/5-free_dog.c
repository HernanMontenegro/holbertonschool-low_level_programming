#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - clean a dog registry
* @d: struct pointer
* ---------------------------
* Return: void
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);
}
