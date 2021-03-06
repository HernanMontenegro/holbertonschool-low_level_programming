#include "lists.h"

/**
* free_listint - frees a list
* @head: the head node
* --------------------------------
* Return't
*/
void free_listint(listint_t *head)
{
	listint_t *obj;
	listint_t *aux;

	obj = head;

	while (obj)
	{
		aux = obj->next;
		free(obj);
		obj = aux;
	}
}
