#include "lists.h"

/**
* print_listint - prints all elements of a list of ints
* @h: recieves a node
* -----------------------------------------
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *current_h = (listint_t *) h;

	if (!h)
		return (count);

	while (current_h)
	{
		printf("%d\n", current_h->n);
		count++;
		current_h = current_h->next;
	}

	return (count);
}
