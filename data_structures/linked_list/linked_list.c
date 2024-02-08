#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

singly_linked_list *new_singly_linked_list() {
	singly_linked_list *new = calloc(1, sizeof(singly_linked_list));
	return new;
}

void delete_singly_linked_list(singly_linked_list **list) {
	node *prev_node = (*list)->head;

	while ((*list)->head && prev_node) {
		prev_node = (*list)->head;
		(*list)->head = (*list)->head->next;
		prev_node->data = 0;
		prev_node->next = NULL;
		free(prev_node);
	}
	free(*list);
	list = NULL;
	return ;
}

void print_node(node *n) {
	printf("Data = %d | Next = %p\n", n->data, n->next);
}

void print_singly_linked_list(singly_linked_list *list) {
	int i = 0;
	for (node *n = list->head; n != NULL; n = n->next) {
		printf("Node %d: ", i);
		print_node(n);
		i++;
	}
}

node *get_last_singly_linked_list(singly_linked_list *list) {
	node *n = list->head;
	for (; n->next != NULL; n = n->next) {}
	return n;
}

void add_node_to_sl_list(node *new_node, singly_linked_list **list) {
	node *n = get_last_singly_linked_list(*list);
	n->next = new_node;
	return ;
}

node *create_node(int data) {
	node *new_node = calloc(1, sizeof(node));

	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void reverse_singly_linked_list(singly_linked_list **list) {
	node *temp_head = (*list)->head;
	node *prev = NULL;
	node *next = NULL;

	while (temp_head) {
		next = temp_head->next;
		temp_head->next = prev;
		prev = temp_head;
		temp_head = next;
	}
	(*list)->head = prev;
}
