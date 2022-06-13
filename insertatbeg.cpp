#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL,*temp;
void push(int d)
{
    node* newnode=new node();
    newnode->data=d;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}
void print()
{
    node* ptr=head;
    while (ptr!=0)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    
}
void insertatbeg(int d)
{
    node* newnode=new node();
    newnode->data=d;
    newnode->next=head;
    head=newnode;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    insertatbeg(0);
    print();
return 0;
}