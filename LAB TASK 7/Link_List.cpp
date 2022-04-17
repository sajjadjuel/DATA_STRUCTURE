#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* h=NULL;
node* n;
node* t;
void create(int s)
{
    int val;
    cout<<"\n Enter Data : ";
    for(int i=0;i<s;i++)
    {
         cin>>val;
    n=new node;
    n->data=val;
    n->next=NULL;
    if(h==NULL)
        h=n;
    else
        t->next=n;
    t=n;

    }
}
void insert_head(int val)
{
   n=new node;
   n->data=val;
   n->next=h;
   h=n;

}
void insert_tail(int val)
{
    node* temp=h;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    n=new node;
    n->data=val;
    n->next=NULL;
    temp->next=n;

}
void insertAfter(int r ,int val )
{
   node* temp=h;
   while(temp->data!=r && temp->next!=NULL)
   {
      temp=temp->next;
   }
   if(temp->data==r)
   {
       n=new node;
       n->next=temp->next;
       temp->next=n;
       n->data=val;
   }
   else
    cout<<"\n\n Can't insert. "<<r<<" Not Found in the link list"<<endl;
}
void Search(int r)
{
     node* temp=h;
   while(temp->data!=r && temp->next!=NULL)
   {
      temp=temp->next;
   }
   if(temp->data==r)
   {
       cout<<"\n\n "<<r<<" Found in the link list"<<endl;
   }
   else
     cout<<"\n "<<r<<" Not Found in the link list"<<endl;
}
void Delete(int r)
{
     node* temp=h;
     if (temp->data==r)
     {
         h=h->next;
         cout<<"\n "<<r<<" Deleted From linked list"<<endl;
     }

     else{

   while(temp->next->data!=r && temp->next!=NULL)
   {
      temp=temp->next;
   }
   if(temp->next->data==r)
   {
       temp->next=temp->next->next;
       cout<<"\n "<<r<<" Deleted From linked list"<<endl;
   }
 else
    cout<<"\n "<<r<<" Not found in linked list"<<endl;

     }

}
void display()
{
    node* temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main()
{
    int s;
    cout<<"\n How Many Data you Want to take First? : ";
    cin>> s;
    create(s);

    cout<<"\n\n Data in the linked list : ";
    display();

    insert_head(0);
    cout<<"\n\n Display after Insert a node at the head : ";
    display();

    insert_tail(6);
    cout<<"\n\n Display after Insert a node at the tail : ";
    display();

    insertAfter(5,7);
    cout<<"\n\n Display after Insert a new item at a specific position  : ";
    display();

    Search(6);
    Search(8);

    Delete(4);
    cout<<"\n\n Display after Delete a node : ";
    display();

    getch();
}
