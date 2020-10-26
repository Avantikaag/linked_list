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
void insertnode(int n1, int m1)
{
  node* temp4;
  temp4=head;
  if(n1<0)
  {
    node* temp5=new node();
    temp5->data=m1;
    temp5->link=temp4;
    head=temp5;
    return;
  }
  for(int i=0;i<n1;i++)
  {
    temp4=temp4->link;
  }
  node* temp5=new node();
  temp5->data=m1;
  temp5->link=temp4->link;
  temp4->link=temp5;
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

  cout<<"Enter the position to insert the new node before it: ";
  int m1,n1;
  cin>>n1;
  cout<<"Enter the value: ";
  cin>>m1;
  insertnode(n1-2,m1);
  print();
  cout<<endl;

  cout<<"Enter the position to insert the new node after it: ";
  cin>>n1;
  cout<<"Enter the value: ";
  cin>>m1;
  insertnode(n1-1,m1);
  print();
  cout<<endl;
  return 0;
}
