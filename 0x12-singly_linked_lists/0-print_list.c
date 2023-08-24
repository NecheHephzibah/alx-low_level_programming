#include "lists.h"

/**
* print_list - function prints elements in a singly linked list
* @h: The head of the list, the start point
* Return: number of nodes in list
*/

size_t print_list(const list_t *h)
{
	int mib = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	mib++;

	return (mib);
}
