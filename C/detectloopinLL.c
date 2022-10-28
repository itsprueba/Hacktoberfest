// C program to detect loop in a linked list
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
typedef struct Node {
	int data;
	struct Node* next;
	int flag;
} Node;

void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = (Node*)malloc(sizeof(Node));

	/* put in the data */
	new_node->data = new_data;

	new_node->flag = 0;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

// Returns true if there is a loop in linked list
// else returns false.
bool detectLoop(struct Node* h)
{
	while (h != NULL) {
		// If this node is already traverse
		// it means there is a cycle
		// (Because you we encountering the
		// node for the second time).
		if (h->flag == 1)
			return true;

		// If we are seeing the node for
		// the first time, mark its flag as 1
		h->flag = 1;

		h = h->next;
	}

	return false;
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 10);

	/* Create a loop for testing */
	head->next->next->next->next = head;

	if (detectLoop(head))
		printf("Loop found");
	else
		printf("No Loop");

	return 0;
}