#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the first then next element in the linked list
 *
 * Return: te head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (*head == NULL)
		return (0);

	temp = *head;
	count = temp->n;
	*head = temp->next;
	free(temp);

	return (count);
}

