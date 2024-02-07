#include "linked_list.h"

singly_linked_list *new_singly_linked_list() {
	singly_linked_list *new = calloc(1, sizeof(singly_linked_list));
	return new;
}

void delete_singly_linked_list(singly_linked_list **list) {
	node *prev_node = (*list)->head;

	while (*list && prev_node) {
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
