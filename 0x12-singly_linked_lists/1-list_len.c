#include "lists.h"

/**
* list_len - function to return length of a list
* @list_t: number of nodes
* @h: pointer to the first node
* Return: number of nodes in the list
*/


size_t list_len(const list_t *h)
{
	int mib;

	if (h == NULL)
		return (0);

	for (mib = 1; h->next != NULL; mib++)
	{
		h = h->next;
	}
	return (mib);
}
