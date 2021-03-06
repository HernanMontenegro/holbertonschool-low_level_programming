#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - prints the struct dog
* @d: the struct memory direction
* ------------------------------------
* Return: void
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: ");
	if ((*d).name != NULL)
		printf("%s\n", (*d).name);
	else
		printf("(nil)\n");

	printf("Age: %f\n", (*d).age);

	printf("Owner: ");
	if ((*d).owner != NULL)
		printf("%s\n", (*d).owner);
	else
		printf("(nil)\n");
}
