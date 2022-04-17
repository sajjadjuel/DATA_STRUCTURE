#include<iostream>
using namespace std;

typedef struct node
{

    int data;
    struct node *next;

} *nodeptr;

nodeptr head=NULL, curr ;
void insert (int value)

{   //int value;


        nodeptr newnode = new node;
        newnode-> data= value;
        newnode-> next= NULL;

        if( head = NULL)
        {
            head = newnode;
        }
        else
            curr->next= newnode;

        curr= newnode;

    cout<< curr->data;
    }




int main ()
{
    int n,p;
    cin>>p;
     for( int i=0;i<p;i++)
    {
        cin>> n;
        insert(n);
    }



}
