#include "lists.h"

/**
* print_list - prints all elements of a list
* @h: recieves a node
* ---------------------
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *search = (list_t *) h;

	if (!h)
		return (count);

	while (search)
	{
		if (!search->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*search).len, (*search).str);
		search = search->next;
		count++;
	}

	return (count);
}
