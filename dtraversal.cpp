#include<iostream>
using namespace std;

struct node
{
  int data;
  node *prev;
  node *next;
};

node* head=NULL;

void insert(int m)
{
  if(head==NULL)
  {
    node* temp=new node();
    head=temp;
    temp->data=m;
    temp->prev=NULL;
    temp->next=NULL;
    return;
  }
  node* temp3;
  temp3=head;
  while((temp3->next)!=NULL)
  {
    temp3=temp3->next;
  }
  node* temp1=new node();
  temp1->data=m;
  temp1->next=NULL;
  temp1->prev=temp3;
  temp3->next=temp1;
  return;
}
void print()
{
  node* temp2;
  temp2=head;
  while((temp2)!=NULL)
  {
    cout<<temp2->data<<" ";
    temp2=temp2->next;
  }
}
int main()
{
  int n,m;
  cout<<"Enter the number of values you want to store in list: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the value: ";
    cin>>m;
    insert(m);
    cout<<"The list is: ";
    print();
    cout<<endl;
  }
  return 0;
}
