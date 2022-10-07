#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void inserttail(node *head)
{
    struct node *newnode;
    newnode = new node;
    cout<<"Enter Data for node "<<endl;
    int a;
    cin>>a;
    newnode->data=a;
    newnode->next=NULL;
    struct node *temp= head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
     temp->next=newnode;

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

void display(node *head)
{
  struct node *temp;
  temp= head;
  int count=1;
  while(temp->next != NULL)
  {
    cout<<"Value of node "<<count<<" is "<<temp->data<<endl;
    count++;
  }

};

void insertmiddle(node *head)
{
    int count=0;
    struct node *newnode;
    newnode= new node;
    struct node *temp=head;
    while(temp->next != NULL)
    {
        count++;
    }
    cout<<"The size of list is "<<count<<" , Where do you want to add the node? "<<endl;
    int b;
    cin>>b;
    cout<<"Enter data for node "<<endl;
    int a;
    cin>>a;
    newnode->data=a;
    for(int i=0;i<count;i++)
    {
      if(temp->next !=NULL)
      {
         temp = temp->next;
        if(i==b)
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
      }

}


int main()
{




return 0;
}