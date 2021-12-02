#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
// Insert at the first...
void push( node** head_ref,int new_data)
{
	/* allocate node */
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	
	/*put in the data*/
	new_node->data = new_data;
	
	/*make next of new node as head*/
	new_node->next = (*head_ref);
	
	/*move the head to print to the new_node*/
	(*head_ref) = new_node;
}
//Insert  after a given  Node....
void insertAfter(node* prev_node,int new_data)
{
	if(prev_node==NULL)
	{
		cout<<"the given previous node cannot be NULL";
		return;
	}
	/* allocate new node*/ 
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	
	/*put in the data*/
	new_node->data = new_data;
	
	/* Make next of new node as next of prev_node*/
	new_node->next = prev_node->next;
	
	/* Move the next of prev_node as new_node*/
	prev_node->next = new_node;
	 
}
//Insert at the last...
void append(node** head_ref,int new_data)
{
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	struct node* last = *head_ref;
	new_node->data = new_data;
	
	new_node->next=NULL;
	
	if(*head_ref = NULL)
	{
		*head_ref = new_node;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
		

	}
	last->next = new_node;
	return;
	
}
void printList(node* head)
{
	while(head != NULL)
	{
		cout<<" "<<head->data;
		head = head->next;
	}
}
int main()
{
	node* head = NULL;
	
	append(&head,6);
	
	push(&head,7);
	
	push(&head,1);
	
	append(&head,4);
	
	insertAfter(head->next,8);
	cout<<"created linked list is:";
	printList(head);
	return 0;
	
	
	
}


