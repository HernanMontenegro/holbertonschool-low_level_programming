#include "lists.h"

/**
* add_nodeint - add new node at the begining
* @head: the head node
* @n: the int value to add
* -------------------------------
* Return: a new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_one;

	new_one = malloc(sizeof(listint_t));
	if (!new_one)
		return (NULL);
	new_one->n = n;
	new_one->next = (*head);

	*head = new_one;

	return (new_one);
}
