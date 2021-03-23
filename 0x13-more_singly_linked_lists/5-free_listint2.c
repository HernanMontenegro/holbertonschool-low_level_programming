#include "lists.h"

/**
* free_listint2 - frees a list
* @head: the head node
* --------------------------------
* Return't
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
