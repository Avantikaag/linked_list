#include<iostream>
using namespace std;

struct node
{
  int data;
  node *link;
};
node* head=NULL;
void insert(int m)
{
  node* temp=new node();
  temp->data=m;
  temp->link=head;
  head=temp;
}
void print()
{
  node* temp=new node();
  temp=head;
  while((temp)!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->link;
  }
}
void reverse()
{
  node* temp1;
  temp1=head;
  node* prev=NULL;
  node* next=NULL;
  while(temp1!=NULL)
  {
    next=temp1->link;
    temp1->link=prev;
    prev=temp1;
    temp1=next;
  }
  head=prev;
  return;
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
  }
  cout<<"The list is: ";
  print();
  cout<<endl;
  reverse();
  print();
  return 0;
}
