#include<iostream>
using namespace std;

struct node
{
  int data;
  node *link;
};
int main()
{
  node* A=new node();
  A->data=2;
  A->link=NULL;
  node* head=new node();
  head=A;
  cout<<A->data<<endl;
  cout<<A->link<<endl;
  cout<<head->data;
  return 0;
}
