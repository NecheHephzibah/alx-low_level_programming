#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *b = head;
	listint_t *g = head;

	if (!head)
		return (NULL);

	while (b && g && g->next)
	{
		g = g->next->next;
		b = b->next;
		if (g == b)
		{
			b = head;
			while (b != g)
			{
				b = b->next;
				g = g->next;
			}
			return (g);
		}
	}

	return (NULL);
}

