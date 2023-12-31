#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: the pointer that links the nodes or arguments
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h; counter++)
	{
		h = h->next;
	}

	return (counter);
}
