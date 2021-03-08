#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - create a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* --------------------------------
* Return: pointer to the struct of new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *d;
	char *copy_name, *copy_owner;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(d);
		return (NULL);
	}

	copy_name = malloc(sizeof(name));
	if (!copy_name)
	{
		free(d);
		free(copy_name);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		copy_name[i] = name[i];
	copy_name[i] = '\0';

	copy_owner = malloc(sizeof(owner));
	if (!copy_owner)
	{
		free(d);
		free(copy_name);
		free(copy_owner);
		return (NULL);
	}
	for (j = 0; owner[j]; j++)
		copy_owner[j] = owner[j];
	copy_owner[j] = '\0';

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}
