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
* insert_nodeint_at_index - insert a new node at index
* @head: the head node
* @idx: the index to insert
* @n: the value to insert
* --------------------------------------
* Return: a new node at index idx
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_obj = NULL;
	listint_t *previous = NULL;
	listint_t *target = NULL;

	/* Create the new node  */
	new_obj = malloc(sizeof(listint_t));
	if (!new_obj)
		return (NULL);
	/* Return NULL if idx not exist  */
	if (!head || listint_count(*head) < idx)
	{
		free(new_obj);
		return (NULL);
	}

	target = get_nodeint_at_index(*head, idx);

	new_obj->n = n;
	new_obj->next = target;

	/* Checks if exist a previous node or if it's the head  */
	if (idx != 0)
	{
		previous = get_nodeint_at_index(*head, idx - 1);
		previous->next = new_obj;
	}
	else
		*head = new_obj;

	return (new_obj);
}
