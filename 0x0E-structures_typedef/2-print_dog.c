#include "dog.h"
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
	{
		printf("nothing\n");
		return;
	}

	printf("Name: ");
	if ((*d).name)
		printf("%s\n", (*d).name);
	else
		printf("(nil)\n");
	printf("Age: ");
	if ((*d).age)
		printf("%f\n", (*d).age);
	else
		printf("(nil)\n");
	printf("Owner: ");
	if ((*d).owner)
		printf("%s\n", (*d).owner);
	else
		printf("(nil)\n");
}
