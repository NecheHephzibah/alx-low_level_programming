#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: linked list type that is connected*
 * Return: the total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (counter);
}

