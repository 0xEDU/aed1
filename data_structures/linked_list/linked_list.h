#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int data;
	struct node *next;
} node;

typedef struct singly_linked_list {
	node *head;
} singly_linked_list;

singly_linked_list	*new_singly_linked_list(void);
void				delete_singly_linked_list(singly_linked_list **list);
#endif // !LINKED_LIST_H
