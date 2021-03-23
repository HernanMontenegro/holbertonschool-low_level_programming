#include "lists.h"

/**
* free_listint2 - frees a list
* @head: the head node
* --------------------------------
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *obj = *head;

	while (*head)
	{
		*head = obj->next;
		free(obj);
		obj = *head;
	}

	*head = NULL;
}
