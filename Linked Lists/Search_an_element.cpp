#include <bits/stdc++.h>

struct Node{
    int data;
    Node *next;
};

void push(Node **head_ref, int new_key){
    struct Node* new_node =  (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_key;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

bool search(Node *head, int node){
    if(head==NULL)
        return false;
    if(head->data == node)
        return true;
    search(head->next,node);
}
int main()  
{  
    /* Start with the empty list */
    struct Node* head = NULL;  
    int x = 21;  
  
    /* Use push() to construct below list  
    14->21->11->30->10 */
    push(&head, 10);  
    push(&head, 30);  
    push(&head, 11);  
    push(&head, 21);  
    push(&head, 14);  
  
    search(head, 21)? cout << "Yes" : cout << "No";  
    return 0;  
}  