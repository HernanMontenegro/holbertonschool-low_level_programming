#include "lists.h"

/**
* listint_len - counts the list length
* @h: a node given
* ------------------------
* Return: the length of a list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *current_h = (listint_t *) h;

	if (!h)
		return (count);

	while (current_h)
	{
		count++;
		current_h = current_h->next;
	}

	return (count);
}
