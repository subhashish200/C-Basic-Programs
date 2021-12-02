#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

};
node *create_node(int x)
{
    node *p = (node*)malloc(sizeof(node));
    p->data = x;
    p->next = NULL;
    return p;

}
node *insert_at_first(node *head,int x)
{
    node *p = create_node(x);
    if(head == NULL)
    {
        p->data = x;
        p->next = NULL;
        head = p;
    }
    else {
        p->data = x;
        p->next = head;
        head = p;
    }

}
node *insert_after_given_node(node *loc,int x)
{
    node *p = create_node(x);
    p->data = x;
    p->next = loc->next;
    loc->next = p;
}
node *insert_at_the_end(node *head,int x)
{
    node *p = create_node(x);
    p->data = x;
    p->next = NULL;
    node *q = head;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;

}
void printAll(node *head)
{
    while(head!= NULL)
    {
        cout<<head->data<<" "<<endl;
        head = head->next;
    }
}
int main()
{
    node *head = NULL;
    head = create_node(10);
    head->next = create_node(15);
    head->next->next = create_node(20);
    head->next->next->next = create_node(25);
    cout<<"After create the nodes"<<endl;
    printAll(head);

    cout<<"after insert the node at the first:"<<endl;

    head = insert_at_first(head,85);
    printAll(head);
    cout<<"after insert the node after a given node:"<<endl;
    head = insert_after_given_node(head->next,100);
    printAll(head);
    cout<<"insert the node at the end position:"<<endl;
    head = insert_at_the_end(head,155);
    printAll(head);
    return 0;


}
