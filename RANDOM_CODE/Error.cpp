#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head=NULL;

void insertAtFirst(int key)
{
node *newNode= new node();
newNode->data= key;
newNode->next = head;
head= newNode;
}
/*
void insertAt(int pos, int key)
{

}*/

void insertAtLast(int key)
{

node *currentNode = head;
  while( currentNode->next!= NULL)
    {
        currentNode=currentNode->next;
    }

    node *newNode= new node();
    newNode->data= key;
    newNode->next = NULL;
    currentNode->next = newNode;


}

void EraseFirst()
{
if(head==NULL)
{
    cout<< " List is empty " <<endl;
}
else
{

    node *temp = head->next;
    head = head->next;

    delete temp;


}

}


void EraseLast()
{
if(head==NULL)
{
    cout<< " List is empty " <<endl;
}
else
{
    node *currentNode=head;

    node *previousNode= new node;

    if(head->next = NULL)
    {

        delete currentNode;
        head=NULL;
    }
    else
    {
        while(currentNode->next !=NULL)
        {
            previousNode=currentNode;
            currentNode->next=currentNode;
            previousNode->next= NULL;
            delete currentNode;
        }
    }
}


}

/*void EraseAt(int pos)
{

}*/

void Remove(int key)
{
if(head==NULL)
{
    cout<<" List is empty" << endl;
}
else
{
    node *currentNode=head;
    node *previousNode= new node;
     while(currentNode !=NULL)
        {
    if(currentNode->data = key)
    {
        if(currentNode=head)

        {
            EraseFirst();
            currentNode=head;
            continue;
        }

    }
    else if(currentNode->next = NULL)
    {

       previousNode->next= NULL;
        //delete currentNode;
        break;
    }
        else
    {
       previousNode->next = currentNode->next;
       node *temp= currentNode;
       currentNode->next = currentNode;
       delete temp;
       continue;
    }

}
previousNode=currentNode;
currentNode->next=currentNode;
}
}
int Count()
{


node *counter= 0;

node *currentNode = head;
while( currentNode!= NULL)
{
    counter++;
     currentNode=currentNode->next;
}
}



void printList()
{
node* currentNode = head;
while(currentNode != NULL)
{
    cout<< currentNode->data << endl;
    currentNode = currentNode->next;
}
}


int main()
{
     insertAtFirst(50);
     insertAtFirst(900);
     insertAtFirst(500);
    insertAtLast(10);
    EraseFirst();
    //EraseLast();
     //Remove(900);
    //Count();
     printList();


    return 0;
}
