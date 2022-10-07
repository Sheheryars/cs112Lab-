#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node* reverse(node *&head, int a)
{
  struct node *temp;
  temp=head;
  node *next;
  node *prev=NULL;
  int count=0;
  while(temp!= NULL && count<a)
  {
    next=temp->next;
    temp->next=prev;
    prev=temp;
    temp=next;
    count++;
  }
  if(next!=NULL)
  {
    head->next=reverse(next,a);
  }
  return prev;
}

void display(node *head)
{
  struct node *temp;
  temp = head;
  int count=1;
  while(temp!= NULL)
  {
    cout<<"Value of node "<<count<<" is "<<temp->data<<endl;
    temp= temp->next;
    count++;
  }

};
void insertstart(node *&head)
{
    struct node *newnode;
    newnode= new node;
    cout<<"Enter Data for node "<<endl;
    int a;
    cin>>a;
    newnode->data=a;
    newnode->next= head;
    head= newnode;
};


int main()
{
    node *head=NULL;
     int i=0;
      while(i != 6)
      {
       insertstart(head);
       i++;
      }
    cout<<"The original linked list is "<<endl;
    display(head);
    cout<<endl;
    node *newnode= reverse(head,2);
    display(newnode);
    
}
