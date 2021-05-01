#include "lists.h"
#include "5-get_dnodeint.c"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - adds a new node in an index
 * @h: the head node
 * @idx: the index to insert
 * @n: the int of the new node
 * ----------------------------------------------
 * Return: the new node at certain index
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *target_indx = NULL;

	if (idx > dlistint_len(*h))
		return (NULL);

	target_indx = get_dnodeint_at_index(*h, idx);

	if (!h || !target_indx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	/* Create new node */
	new->n = n;
	new->next = target_indx;
	new->prev = NULL;
	target_indx->prev = new;

	if (idx > 0)
	{
		new->prev = target_indx->prev;
		target_indx->prev->next = new;
	}
	else
		*h = new;

	return (new);
}
