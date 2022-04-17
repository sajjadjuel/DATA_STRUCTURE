#include <iostream>
using namespace std;

typedef struct ListNode
{
    int data;
    struct ListNode *next;
}*nodeptr;

nodeptr head=NULL,curr;

void addData(int itm)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        curr->next=newNode;
    }
    curr=newNode;
}

void display(nodeptr p)
{
   while(p!=NULL)
   {
       cout<<p->data<<" ";
       p=p->next;
   }
}

void searchItem(int item)
{
    nodeptr ptr=head;
    while(ptr->data!=item && ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==item)
    {
        cout<<item<<" is found"<<endl;
    }
    else
    {
        cout<<item<<" is not found"<<endl;
    }
}

void insertFirst(int itm)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    newNode->next=head;
    head=newNode;
}

void insertMiddle(nodeptr p, int node, int itm)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    while(p->data!=node && p->next!=NULL)
    {
        p=p->next;
    }
    if(p->data==node)
    {
        newNode->next=p->next;
        p->next=newNode;
    }
}

void insertLast(int itm,nodeptr p)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newNode;
}

void deleteFirst(nodeptr p)
{
    head=p->next;
    delete p;
}

void deletionMiddle(nodeptr p, int itm)
{
    nodeptr dptr;
    while(p->next->data!=itm && p->next!=NULL)
    {
        p=p->next;
    }
    if(p->next->data==itm)
    {
        dptr=p->next;
        p->next=dptr->next;
        delete dptr;
    }
}

void deletionLast(nodeptr p)
{
    nodeptr dptr;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    dptr=p->next;
    p->next=NULL;
    delete dptr;
}

int main()
{
    int n,i,item,nd;
    cout<<"Enter number of nodes: ";
    cin>>n;
cout<<"Enter value: ";
    for(i=1;i<=n;i++)
    {

        cin>>item;
        addData(item);
    }
    cout<<"Display, The List Is: "<<endl;
    display(head);
    cout<<endl;

    cout<<"\nEnter item's value to search: "<<endl;
    cin>>item;
    searchItem(item);
    cout<<endl;

    cout<<"\nInset Operations...\nInsertion at Beginning/first: "<<endl;
    cout<<"Enter value: ";
    cin>>item;
    insertFirst(item);
    cout<<"The List Is: "<<endl;
    display(head);
    cout<<endl;

    cout<<"\nAfter which node you want to insert: ";
    cin>>nd;
    cout<<"Enter value: ";
    cin>>item;
    insertMiddle(head,nd,item);
    cout<<"The List Is: "<<endl;
    display(head);
    cout<<endl;

    cout<<"\nNow, Delete Operations...\nDeletion at First: ";
    deleteFirst(head);
    cout<<"The List Is: "<<endl;
    display(head);
    cout<<endl;

    cout<<"Deletion at Middle: "<<endl;
    cout<<"Enter node(value) to delete: ";
    cin>>item;
    deletionMiddle(head,item);
    cout<<"The List Is: "<<endl;
    display(head);
    cout<<endl;

    cout<<"Deletion at Last: "<<endl;
    deletionLast(head);
    cout<<"The List Is: "<<endl;
    display(head);
    cout<<endl;
}
