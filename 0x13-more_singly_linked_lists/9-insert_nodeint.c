#include "lists.h"
#include "7-get_nodeint.c"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_obj = NULL;
	listint_t *previous = NULL;
	listint_t *target = NULL;

	if (idx != 0)
		previous = get_nodeint_at_index(*head, idx - 1);

	target = get_nodeint_at_index(*head, idx);

	/* Create the new node  */
	new_obj = malloc(sizeof(listint_t));
	if (!new_obj || !target)
		return (NULL);
	new_obj->n = n;
	new_obj->next = target;

	/* Set the previous node next the new node  */
	if (idx != 0)
		previous->next = new_obj;
	else
		*head = new_obj;

	return (new_obj);
}
