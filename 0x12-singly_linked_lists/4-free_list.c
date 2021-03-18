#include "lists.h"

/**
* free_list - frees an entire list!!
* @head: where to start
* -----------------------------------
* Return: void
*/
void free_list(list_t *head)
{
	list_t *next;

	if (!head)
		return;

	while (head)
	{
		next = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = next;
	}

	head = NULL;
}
