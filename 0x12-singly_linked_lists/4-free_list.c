#include "lists.h"

/**
* free_list - frees an entire list!!
* @head: where to start
* -----------------------------------
* Return: void
*/
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	if (!head)
		return;

	while (current)
	{
		next = current;
		current = current->next;
		if (next->str)
			free(next->str);
		free(next);
	}
}
