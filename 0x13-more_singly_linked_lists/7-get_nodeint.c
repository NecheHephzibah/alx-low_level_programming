#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Return: the nth node of a listint_t lined list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return NULL;
		current_node = current_node->next;
	}

	return current_node;
}
