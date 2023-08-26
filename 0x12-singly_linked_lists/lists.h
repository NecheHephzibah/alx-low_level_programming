#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - This is a singly linked list
 * @str: string (aready assined space, malloced)
 * @len: length of the string
 * @next: pointer to the next node
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);

size_t print_list(const list_t *h);

int nodeLength(const char *str);

list_t *buildNode(const char *str);



size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

void free_list(list_t *head);


int nodeLength(const char *str);

#endif /* _LISTS_H_ */
