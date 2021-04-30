#include "lists.h"

/**
 * dlistint_len - calculate the length of a list
 * @h: head node of the list
 * ----------------------------------
 * Return: ammount of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
