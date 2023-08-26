#include "lists.h"

int nodeLength(const char *str);

list_t *buildNode(const char *str);

/**
 * add_node_end - Add a new node with the given string to
 * the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: The string to initialize the new node with.
 * Return: A pointer to the updated head of the linked list,
 * or NULL if memory allocation fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cache;
	list_t *newElement;

	cache = *head;

	if (head == NULL)
	{
		return (NULL);
	}
		newElement = buildNode(str);
	if (newElement == NULL)
		return (NULL);
	if (*head == NULL)

	{
		*head = newElement;
		return (*head);
	}
	while (cache->next != NULL)
		cache = cache->next;
	cache->next = newElement;
	return (*head);
}

/**
 * buildNode - Create a new node with the given string.
 * @str: The string to initialize the node with.
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */

list_t *buildNode(const char *str)
{
	list_t *newElement;

	newElement = malloc(sizeof(list_t));

	if (newElement == NULL)
		return (NULL);

	newElement->str = strdup(str);
	newElement->len = nodeLength(str);
	newElement->next = NULL;

	return (newElement);
}

/**
* nodeLength - the length of str
* @str: string wey we go find im length
* Return: return how many length you see
*/
int nodeLength(const char *str)
{
	int mib;

	if (str == NULL)
		return (0);

	mib = 0;
	while(str[mib] != '\0')
	{
		mib++;
	}

	return (mib);
}
