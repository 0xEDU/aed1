#include "linked_list.h"

int main() {
	singly_linked_list *list = new_singly_linked_list();
	node *head = create_node(42);
	list->head = head;
	print_singly_linked_list(list);
	delete_singly_linked_list(&list);
	return 0;
}
