#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
*
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}
