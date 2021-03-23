#include "lists.h"
#include "4-free_listint.c"

/**
* free_listint2 - frees a list
* @head: the head node
* --------------------------------
* Return: void
*/
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
