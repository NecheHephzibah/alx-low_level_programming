#include "lists.h"

/**
 * free_list - Deallocate memory used by a linked list.
 * @head: Pointer to the head of the linked list to be freed.
 */

void free_list(list_t *head)
{
	list_t *cache;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		cache = head->next;
		free(head->str);
		free(head);
		head = cache;
	}
	free(head->str);
	free(head);
}

