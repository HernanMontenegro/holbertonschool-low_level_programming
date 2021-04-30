#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the head node to start cleanning
 * -------------------------------------------
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	if (!head)
		return;

	while (head)
	{
		head = head->next;
		free(aux);
		aux = head;
	}
}
