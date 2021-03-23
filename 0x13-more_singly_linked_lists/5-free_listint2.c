#include "lists.h"

/**
* free_listint2 - frees a list
* @head: the head node
* --------------------------------
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (!*head)
		return;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
