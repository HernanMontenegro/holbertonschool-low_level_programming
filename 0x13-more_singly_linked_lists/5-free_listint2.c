#include "lists.h"

/**
* free_listint2 - frees a list
* @head: the head node
* --------------------------------
* Return't
*/
void free_listint2(listint_t **head)
{
	listint_t *obj;
	listint_t *aux;

	if (!*head)
		return;

	obj = (*head)->next;
	free(*head);
	*head = NULL;

	while (obj)
	{
		aux = obj->next;
		free(obj);
		obj = aux;
	}
}
