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
	list_t *new_obj;

	new_obj = malloc(sizeof(list_t));
	if (!new_obj)
		return (NULL);
	new_obj->str = strdup(str);
	new_obj->len = _strlen(str);
	new_obj->next = *head;

	(*head) = new_obj;

	return (new_obj);
}
