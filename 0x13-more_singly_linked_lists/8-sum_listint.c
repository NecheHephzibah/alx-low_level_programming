#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all data in list
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}

