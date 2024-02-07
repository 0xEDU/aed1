#include "linked_list.h"

int main() {
	singly_linked_list *list = new_singly_linked_list();
	delete_singly_linked_list(&list);
	return 0;
}
