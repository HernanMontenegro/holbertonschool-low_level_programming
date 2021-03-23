#include "lists.h"
#include "7-get_nodeint.c"

/**
* listint_count - counts the list length
* @h: a node given
* ------------------------
* Return: the length of a list
*/
unsigned int listint_count(const listint_t *h)
{
	unsigned int count = 0;
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

/**
* delete_nodeint_at_index - delete by index
* @head: the head node
* @index: the index to delete
* --------------------------------------------
* Return: the node index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = NULL;
	listint_t *target = NULL;
	listint_t *next = NULL;

	if (!head || !*head || listint_count(*head) < index)
		return (-1);

	target = get_nodeint_at_index(*head, index);
	next = target->next;

	/* Checks if exist a previous node or if it's the head  */
	if (index != 0)
	{
		previous = get_nodeint_at_index(*head, index - 1);
		previous->next = next;
	}
	else
		*head = next;

	free(target);

	return (1);
}
