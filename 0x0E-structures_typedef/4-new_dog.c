#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* my_strlen - get the length of a string
* @s:the string given
* --------------------------------
* Return: the length
*/
int my_strlen(char *s)
{
	int n = 0;

	if (*s != '\0')
		n = n + my_strlen(s + 1);
	else
		return (0);

	n++;

	return (n);
}

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
		return (NULL);

	if (!name || !owner)
		return (NULL);

	copy_name = malloc(sizeof(char) * (my_strlen(name)) + 1);
	if (!copy_name)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		copy_name[i] = name[i];
	copy_name[i] = '\0';

	copy_owner = malloc(sizeof(char) * (my_strlen(owner)) + 1);
	if (!copy_owner)
	{
		free(d);
		free(copy_name);
		return (NULL);
	}
	for (j = 0; owner[j]; j++)
		copy_owner[j] = owner[j];
	copy_owner[j] = '\0';

	(*d).name = copy_name;
	(*d).age = age;
	(*d).owner = copy_owner;

	return (d);
}
