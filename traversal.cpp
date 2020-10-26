#include<iostream>
using namespace std;

struct node
{
  int data;
  node *link;
};
node* head=new node();
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
  while((temp->link)!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->link;
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
