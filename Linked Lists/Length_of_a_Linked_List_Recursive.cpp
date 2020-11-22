// Recursive C program to find length or count of nodes in a linked list 
#include<stdio.h> 
#include<stdlib.h> 

/* Link list node */
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

void push(struct Node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct Node* new_node = 
			(struct Node*) malloc(sizeof(struct Node)); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

int getCount(struct Node* head) 
{ 
	if (head == NULL) 
		return 0;
	return 1 + getCount(head->next); 
} 

/* Driver program to test count function*/
int main() 
{ 
	struct Node* head = NULL; 

	push(&head, 1); 
	push(&head, 3); 
	push(&head, 1); 
	push(&head, 2); 
	push(&head, 1); 

	printf("count of nodes is %d", getCount(head)); 
	return 0; 
} 
