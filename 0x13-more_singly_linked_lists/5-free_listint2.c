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

	while (obj)
	{
		aux = obj->next;
		free(obj);
		if (!aux)
			break;
		obj = aux;
	}

	*head = NULL;
}
