#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node at a given position.
 *
 * @head: pointer to the first node in the list
 * @idx: index of the new node
 * @n: data
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current_node == NULL)
		return NULL;
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return NULL;

	new_node->next = current_node->next;
	current_node->next = new_node;

	return new_node;
}
