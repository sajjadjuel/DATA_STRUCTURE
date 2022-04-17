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
  node *newNode =new node ();
  newNode->data=key;
  newNode->next=head;
  head= newNode;
}

int Count()
{
   int counter =0;
   node *currentNode =head;
   while(currentNode != NULL)
   {
       counter++;
       currentNode =currentNode->next;
       return counter ;
   }
}



void insertAt(int pos, int key)
{
  if( Count()<=pos)
  {
      cout<<"Invalid Position";
  }
  else{
      node *currentNode =head;
      int index =0;
       for(index =0;index<pos;index++){
            currentNode=currentNode->next;
            node *newNode=new node();
            newNode->data=key;
            currentNode->next =newNode-> next;
             newNode=currentNode->next;

  }
}

}



void insertAtLast(int key)
{
  if(head==NULL)
  {
      insertAtFirst(key);
  }
  else{
        node *currentNode =head;
      while(currentNode->next != NULL)
      {
          currentNode =currentNode->next;


      }
        node *newNode =new node;
        newNode->data=key;
    newNode->next=NULL;
    currentNode->next=newNode;

      }
}

void EraseFirst()
{
   if(head==NULL)
   {
        cout<<"List is empty";
   }
   else{
      node* temp=head->next;
       head->next =head;
       delete temp;
   }
}




void EraseLast()
{
   if (head==NULL){
       cout<<"List is empty";

   }
   else{
        node *currentNode =head;
        node* previousNode;
        if(head->next ==NULL){
            delete currentNode;
            head = NULL;
        }
        else{
            while(currentNode->next!=NULL){
                previousNode =currentNode;
                currentNode=currentNode->next;
                previousNode->next=NULL;
                delete currentNode;
            }
        }
   }


}



void EraseAt(int pos)
{
if(Count()<=pos){
    cout<<"invalid position";
}
else{
    if(pos=0){
        EraseFirst();
    }
    else if(pos=Count()-1) {
        EraseLast();

    }
    else{
        for(int index =0;index<pos;index++){
            node* currentNode;

            node* temp =currentNode->next;
            currentNode->next=temp->next;
            delete temp;
        }


    }

}
}








void Remove(int key)
{
 if(head==NULL){
     cout<<"List is empty";
 }
 else{
     node *currentNode =head;
     node*  previousNode;
     while(currentNode !=NULL){
         if(currentNode->data==key)
         {
             if(currentNode==head)
             {
                 EraseFirst();
                 currentNode=head;
                 continue;
             }
             else if(currentNode->next==NULL){
                 previousNode->next=NULL;
                 delete currentNode;
                 break;
             }
             else{
                 previousNode->next=currentNode->next;
                 node*  temp =currentNode;
                 currentNode=currentNode->next;
                 delete temp;
                 continue;
             }

         }
         else{
             previousNode=currentNode;
             currentNode=currentNode->next;
         }
     }
 }
}






void printList()
{
   node *currentNode =head;
   while(currentNode != NULL)
   {
       cout<<currentNode->data<<endl;
       currentNode=currentNode->next;
   }
}


int main()
{
    insertAtFirst(10);
    insertAtFirst(12);
    insertAtFirst(9);
    insertAtFirst(6);
    printList();
    return 0;
}
