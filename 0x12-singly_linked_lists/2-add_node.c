#include "lists.h"

int nodeLength(const char *str);

/**
* add_node - function that adds nodes to the beggining of a list
* @head: This is the pointer to the another lists' head
* @str: This is the string that'll be insertted to the beginning
* list
* Return: pointer to the first node in line, recently assigned
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;

	if (head == NULL)
		return (NULL);

	newElement = malloc(sizeof(list_t));

	if (newElement == NULL)
		return (NULL);

	if (*head == NULL)
		newElement->next = NULL;
	else
			newElement->next = *head;

		newElement->str = strdup(str);
		newElement->len = nodeLength(str);
		*head = newElement;

	return (*head);
}


/**
* nodeLength - calls or get the length of a string, str
* what else
* @str: the string that it's length would be gotten
* Return: length of str
*/
int nodeLength(const char *str)
{
	int mib;

	if (str == NULL)
		return (0);

	mib = 0;

	while (str[mib] != '\0')
	{
		mib++;
	}

	return (mib);
}
