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
}
int find_max(node *head){
	int max=-1;
	while(head!=NULL){
		if(head->data>max){
			max=head->data;
		}
		head=head->next;
	}
	return max;
	
}
int main(){
	
	node *head=NULL;
	head=create_node(5);
	head->next=create_node(10);
	head->next->next=create_node(15);
	head->next->next->next=create_node(20);
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<find_max(head);
	
}
