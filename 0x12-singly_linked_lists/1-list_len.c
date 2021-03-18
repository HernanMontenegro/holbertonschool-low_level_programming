#include "lists.h"

/**
* list_len - calculates the length of a list
* @h: list element
* --------------------------
* Retuen: the length of the list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *search = (list_t *) h;

	if (!h)
		return (count);

	while (search)
	{
		search = (*search).next;
		count++;
	}

	return (count);
}
