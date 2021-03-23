#include "lists.h"

/**
* get_nodeint_at_index - search by index
* @head: the head node
* @index: the index to search
* --------------------------------------------
* Return: the node index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *pos;

	pos = head;
	while (pos && count != index)
	{
		pos = pos->next;
		count++;
	}

	return (pos);
}

/**
* delete_nodeint_at_index - delete a node in an index
* @head: the head node
* @index: the index to remove
* -----------------------------------
* Return: 1 if it succeeded, -1 if not
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = NULL;
	listint_t *target = NULL;
	listint_t *next_one = NULL;

	if (*head)
	{
		previous = get_nodeint_at_index(*head, index - 1);
		target = get_nodeint_at_index(*head, index);
		next_one = target->next;
	}

	if (index == 0 && *head)
	{
		free(*head);
		*head = next_one;
		return (1);
	}
	else if (previous || target)
	{
		free(target);
		previous->next = next_one;
		return (1);
	}

	return (-1);
}
