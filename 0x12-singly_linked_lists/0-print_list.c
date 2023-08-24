#include "lists.h"

/**
* print_list - function prints elements in a singly linked list
* @h: The head of the list, the start point
* Return: number of nodes in list
*/

size_t print_list(const list_t *h)
{
	int mib;
	unsigned int len;

	if (h == NULL)
		return (0);

	for (mib = 1; h->next != NULL; mib++)
	{
		len = h->len;
		if (h->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
			len = 0;
		}
		else
			printf("[%u] %s\n", len, h->str);
		h = h->next;
	}

	len = h->len;

	if (h->str == NULL)
	{
		printf("[0] %s\n", "(nil)");
		len = 0;
	}
	else
		printf("[%u] %s\n", len, h->str);

	return (mib);
}
