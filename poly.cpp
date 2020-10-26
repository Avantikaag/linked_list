#include<iostream>
using namespace std;

struct node
{
  int pow;
  int coef;
  node *link;
};
int key=0;
node* head1=NULL;
node* head2=NULL;

void insertnode(int key1, int value, int value1)
{
  node* tempc;
  tempc=head1;
  for(int i=1;i<key1;i++)
  {
    tempc=tempc->link;
  }
  node* tempd=new node();
  tempd->pow=value1;
  tempd->coef=value;
  tempd->link=tempc->link;
  tempc->link=tempd;
}

void insert(int m1, int m2, int l)
{
    if(head1==NULL&&l==2)
    {
      node* temp=new node();
      head1=temp;
      temp->pow=m1;
      temp->coef=m2;
      temp->link=NULL;
      return;
    }
    if(head2==NULL&&l==1)
    {
      node* temp=new node();
      head2=temp;
      temp->pow=m1;
      temp->coef=m2;
      temp->link=NULL;
      return;
    }
    node* temp3;
    if(l==2)
    temp3=head1;
    else
    temp3=head2;
  while((temp3->link)!=NULL)
  {
    temp3=temp3->link;
  }
  node* temp1=new node();
  temp1->pow=m1;
  temp1->coef=m2;
  temp1->link=NULL;
  temp3->link=temp1;
  return;
}
void print(int l)
{
  node* temp2;
  if(l==2)
  temp2=head1;
  else
  temp2=head2;
  while(temp2!=NULL)
  {
    cout<<temp2->pow<<" "<<temp2->coef<<"   ";
    temp2=temp2->link;
  }
}
void add()
{
  node* tempa;
  tempa=head1;
  node* tempb;
  tempb=head2;
  while(tempa!=NULL&&tempb!=NULL)
  {
      if(tempa->pow==tempb->pow)
      {
        tempa->coef=tempa->coef+tempb->coef;
        tempa=tempa->link;
        tempb=tempb->link;
        ++key;
      }
      else if((tempa->pow)>(tempb->pow))
      {
        tempa=tempa->link;
        ++key;
      }
      else
      {
        insertnode(key, tempb->coef, tempb->pow);
        tempb=tempb->link;
      }
  }
  return;
}
int main()
{
  int n,m1,m2,l=2;
  while(l>0)
  {
    cout<<"Enter the degree of polynomial: ";
    cin>>n;
    for(int i=0;i<n+1;i++)
    {
      cout<<"Enter the power: ";
      cin>>m1;
      cout<<"Enter the coefficient: ";
      cin>>m2;
      if(m2==0)
      continue;
      insert(m1,m2,l);
    }
    cout<<"The list is: ";
    print(l);
    cout<<endl;
    --l;
  }
  add();
  print(2);
  return 0;
}
