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
void				print_node(node *n);
void				print_singly_linked_list(singly_linked_list *list);
node				*get_last_singly_linked_list(singly_linked_list *list);
void				add_node_to_sl_list(node *new_node, singly_linked_list **list);
node				*create_node(int data);
void				reverse_singly_linked_list(singly_linked_list **list);
#endif // !LINKED_LIST_H
