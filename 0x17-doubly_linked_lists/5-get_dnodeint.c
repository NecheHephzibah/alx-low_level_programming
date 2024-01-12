#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: pointer to head of the list
 * @index: index of the node to search for.
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp;

	len = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == len)
	return (temp);
	len++;
	temp = temp->next;
	}
	return (NULL);
}
