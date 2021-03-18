#include "lists.h"

/**
* _strlen - return the length of the string
* @s: string
* ------------------------
* Return: void.
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
* add_node_end - adds a node at the end
* @head: head reference
* @str: string to add
* -------------------------------------
* Return: a new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_obj = NULL, *previous = NULL;

	new_obj = malloc(sizeof(list_t));
	if (!new_obj)
		return (NULL);

	new_obj->len = _strlen(str);
	new_obj->str = strdup(str);
	new_obj->next = NULL;
	
	if (!*head)
	{
		*head = new_obj;
		return (new_obj);
	}
	
	previous = *head;

	while ((*previous).next)
		previous = (*previous).next;

	new_obj = malloc(sizeof(list_t));
	if (!new_obj)
		return (NULL);
	previous->next = new_obj;

	return (new_obj);
}
