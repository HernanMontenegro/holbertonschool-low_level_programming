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

	if (!(*search).str)
	{
		(*search).str = "(nil)";
		(*search).len = 0;
	}

	while ((*search).next)
	{
		printf("[%u] %s\n", (*search).len, (*search).str);
		search = (*search).next;
		count++;
	}
		printf("[%u] %s\n", (*search).len, (*search).str);
		count++;

	return (count);
}
