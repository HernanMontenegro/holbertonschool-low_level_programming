#include "lists.h"

/**
* sum_listint - sum the entire list
* @head: the head node of the list
* ------------------------------------
* Return: the int sum
*/
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *next_obj;

	next_obj = head;
	for (; next_obj; )
	{
		n += next_obj->n;
		next_obj = next_obj->next;
	}

	return (n);
}
