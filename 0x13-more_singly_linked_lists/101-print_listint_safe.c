#include "lists.h"
#include <stdio.h>


/**
 * print_listint_safe -  function that prints a listint_t linked list.
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head;

	while (current_node != NULL && count < 9999)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		count++;
	}

	if (count == 9999)
	{
		printf("The list is too long to print safely.\n");
		exit(98);
	}

	return count;
}

