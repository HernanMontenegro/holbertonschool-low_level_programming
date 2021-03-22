#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end
* @head: the head node
* @n: the value of the node
* ---------------------------------------
* Return: a new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *check_next;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* New node creation */
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	check_next = *head;
	/* Iterates still find the NULL next  */
	while (check_next->next)
		check_next = check_next->next;

	check_next->next = new_node;

	return (new_node);
}
