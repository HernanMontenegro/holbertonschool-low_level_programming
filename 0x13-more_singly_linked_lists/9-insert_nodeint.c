#include "lists.h"

/**
* get_nodeint_at_index - search by index
* @head: the head node
* @index: the index to search
* --------------------------------------------
* Return: the node index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int count = 0;
        listint_t *pos;

        pos = head;
        while (pos && count != index)
        {
                pos = pos->next;
                count++;
        }

        return (pos);
}

/**
* insert_node_at_index - add a new node in specific index
* @head: the head node
* @idx: index to insert
* @n: n value of the new node
* -----------------------------------
* Return: a new node in that index
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_obj;
	listint_t *previous;
	listint_t *target;

	previous = get_nodeint_at_index(*head, idx - 1);
	target = get_nodeint_at_index(*head, idx);

	/* Create the new node  */
	new_obj = malloc(sizeof(listint_t));
	if (!new_obj || !target || !previous)
		return (NULL);
	new_obj->n = n;
	new_obj->next = target;

	/* Set the previous node next the new node  */
	previous->next = new_obj;

	return (new_obj);
}
