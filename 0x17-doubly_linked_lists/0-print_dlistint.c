#include "lists.h"

/**
 * print_dlistint - print a list
 * @h: head node of the list
 * ----------------------------------
 * Return: ammount of elements in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
