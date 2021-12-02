#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node*next;
};
node *create_node(int x){
	node *p=(node *)malloc(sizeof(node));
	p->data=x;
	p->next=NULL;
	return p;
}/*
int find_max(node *head){
	int max=-1;
	while(head!=NULL){
		if(head->data>max){
			max=head->data;
		}
		head=head->next;
	}
	return max;
	
}*/
node* insert_at_first(node *head,int x){
	node *temp=head;
	node *p=create_node(x);
	head=p;
	p->next=temp;
	return head;
	
}
node *insert_last(node *head,int x){
	node *p=create_node(x);
	if(head==NULL){
		return p;
	}
	else{
		node *q=head;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=p;
		return head;
	}
}
void printll(node *head){
	while(head!=NULL){
		cout<<head->data<<" "<<endl;
	    head=head->next;
	}
}
int find_middle(node *head){
	if(head==NULL)
	{
		return -1;
	}
	else if (head->next==NULL){
		return head->data;
	}
	else
	{
		node *p=head;
		node *q=head;
		while(q!=NULL)
		{
			q=q->next;
			if(q==NULL)
			{
				break;
			}
			q=q->next;
			if(q==NULL)
			{
				break;
			}
			p=p->next;
		}
		return p->data;
	}

}

int main(){
	
	node *head=NULL;
	head=create_node(5);
	head->next=create_node(10);
	head->next->next=create_node(15);
	head->next->next->next=create_node(20);
	/*while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}*/
	//cout<<find_max(head);
	head=insert_at_first(head,2);
	head=insert_last(head,25);
	printll(head);
	
	cout<<"Midile element is:"<<find_middle(head);
	
	
}
