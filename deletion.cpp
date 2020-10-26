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

  if(head==NULL)
  {
    node* temp=new node();
    head=temp;
    temp->data=m;
    temp->link=NULL;
    return;
  }
  node* temp3;
  temp3=head;
  while((temp3->link)!=NULL)
  {
    temp3=temp3->link;
  }
  node* temp1=new node();
  temp1->data=m;
  temp1->link=NULL;
  temp3->link=temp1;
  return;
}
void print()
{
  node* temp2;
  temp2=head;
  while((temp2)!=NULL)
  {
    cout<<temp2->data<<" ";
    temp2=temp2->link;
  }
}
void deletenode(int n1)
{
  node* temp4;
  temp4=head;
  if(n1<=0)
  {
    head=temp4->link;
    return;
  }
  for(int i=0;i<n1-1;i++)
  {
    temp4=temp4->link;
  }
  temp4->link=(temp4->link)->link;
  return;
}
void deletebyvalue(int n1)
{
  node* temp4;
  temp4=head;
  if(temp4->data==n1)
  {
    head=temp4->link;
    return;
  }
  while(((temp4->link)->data)!=n1)
  {
    temp4=temp4->link;
  }
  temp4->link=(temp4->link)->link;
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
    cout<<"The list is: ";
    print();
    cout<<endl;
  }
  cout<<"Enter the position of node to delete it's value: ";
  int n1;
  cin>>n1;
  deletenode(n1-1);
  print();
  cout<<endl;

  cout<<"Enter the node value to delete it: ";
  cin>>n1;
  deletebyvalue(n1);
  print();
  cout<<endl;
  return 0;
}
