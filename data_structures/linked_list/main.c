#include "linked_list.h"

void basic_example() {
	singly_linked_list *list = new_singly_linked_list();
	node *head = create_node(42);

	printf("Basic example of a linked list:\n");
	list->head = head;
	print_singly_linked_list(list);
	delete_singly_linked_list(&list);
	printf("\n");
	return ;
}

void reversing_singly_linked_list() {
	singly_linked_list *list = new_singly_linked_list();
	node *head = create_node(42);
	node *node1 = create_node(43);
	node *node2 = create_node(44);

	printf("Reversing a singly linked list:\n\nBefore:\n");
	list->head = head;
	add_node_to_sl_list(node1, &list);
	add_node_to_sl_list(node2, &list);
	print_singly_linked_list(list);
	printf("\nAfter:\n");
	reverse_singly_linked_list(&list);
	print_singly_linked_list(list);
	delete_singly_linked_list(&list);
}

int main() {
	basic_example();
	reversing_singly_linked_list();
	return 0;
}
