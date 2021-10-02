#include<iostream>
using namespace std;
class node{
  public:
     int data;
     node* next=NULL;
};
int main(){
    
    node *head=NULL;
    node *temp=NULL;
    head= new node();
    temp=new node;
    
    int i;
    do
    {
      
      cin>>i;
      node *n=new node();
      n->data=i; n->next=NULL;
      if (i==0)
      {
        continue;
      }
      
      if (head==NULL)
      {
        head=n;
        temp=n;
      }
      else
      {
        temp->next=n;
        temp=n; 

      }
    } while (i>0);
    while (head==NULL)
    {
      cout<<head->data<<endl;
      head=head->next;
    }
    
    
    

    return 0;
}