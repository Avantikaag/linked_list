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
void deletenode(int n1, int n)
{
  node* temp4;
  temp4=head;
  if(n1==0)
  {
    head=temp4->next;
    return;
  }
  if(n1==n-1)
  {
    for(int i=0;i<n1-1;i++)
    {
      temp4=temp4->next;
    }
    temp4->next=NULL;
    return;
  }
  for(int i=0;i<n1;i++)
  {
    temp4=temp4->next;
  }
  (temp4->prev)->next=(temp4->next);
  (temp4->next)->prev=temp4->prev;
  return;
}
void deletebyvalue(int n1)
{
  node* temp4;
  temp4=head;
  if(temp4->data==n1)
  {
    head=temp4->next;
    return;
  }
  while((temp4->data)!=n1)
  {
    temp4=temp4->next;
  }
  if(temp4->next!=NULL)
  {
    (temp4->prev)->next=(temp4->next);
    (temp4->next)->prev=temp4->prev;
  }
  else
  {
    (temp4->prev)->next=NULL;
  }
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

  cout<<"Enter the position of node to delete the value: ";
  int n1;
  cin>>n1;
  deletenode(n1-1,n);
  print();
  cout<<endl;

  cout<<"Enter the node value to delete it: ";
  cin>>n1;
  deletebyvalue(n1);
  print();
  cout<<endl;
  return 0;
}
