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
* add_node - adds a new node
* @head: the head pointer reference
* @str: string given
* -------------------------------------
* Return: a new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_obj, *previous = NULL;

	/* this just will happen 1 time */
	if (!*head)
	{
		new_obj = malloc(sizeof(list_t));
		if (!new_obj)
			return (NULL);
		new_obj->len = _strlen(str);
		new_obj->str = strdup(str);
		new_obj->next = NULL;
		*head = new_obj;

		return (*head);
	}

	previous = (*head)->next;

	new_obj = malloc(sizeof(list_t));
		if (!new_obj)
			return (NULL);
	new_obj->str = strdup(str);
	new_obj->len = _strlen(str);
	new_obj->next = previous;

	(*head)->str = new_obj->str;
	(*head)->len = new_obj->len;
	(*head)->next = new_obj;

	return (new_obj);
}
