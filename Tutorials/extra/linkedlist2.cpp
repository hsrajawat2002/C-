#include<iostream>
using namespace std;

struct node
{
  int data;
  node * next=NULL;
};

int main(){
  node* head=new node(); 
  node* temp=new node(); 
  temp=head;
  int i;
  do
  {
    cin>>i; 
    node * n=new node();
    if (i==0)
    {
      continue;
    }
    n->data=i;
    temp->data=i;
    temp->next=n;
    temp=temp->next;
    
  } while (i>0);
  while (head->next!=NULL)
  {
    cout<<head->data<<endl;
    head=head->next;
  } 
  return 0;
}