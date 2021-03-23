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

	obj = *head;
	*head = NULL;

	while (obj)
	{
		free(obj);
		aux = obj->next;
	}
}
