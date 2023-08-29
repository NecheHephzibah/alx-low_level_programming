#include "lists.h"

/**
 * free_listint_safe - function that finds the loop in a linked list.
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int k;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		k = *h - (*h)->next;
		if (k > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

