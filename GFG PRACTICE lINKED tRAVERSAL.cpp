#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
	    Node*next;
};
void printList(Node* head){
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
		
	}
}
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	head->data=1;
	head->next=second;
	
	second->data = 2;
	second->next = third;
	
	third->data=3;
	third->next =  NULL;
	
	printList(head);
	
	return 0;
	
	
	
	
}
