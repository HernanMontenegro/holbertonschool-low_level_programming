#include "lists.h"

/**
* pop_listint - removes list head and returns it's value
* @head: the list's head node
* --------------------------------------
* Return: the value of previous head
*/
int pop_listint(listint_t **head)
{
	listint_t *nxtVal;
	int n = 0;

	if (!*head)
		return (n);

	nxtVal = (*head)->next;

	(*head)->next = *head;
	n = (*head)->n;

	free(*head);
	*head = nxtVal;

	return (n);
}
