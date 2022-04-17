#include<iostream>
using namespace std;

// define structure
struct NODE{
    int data;
    NODE *next;
};

//it will always point to first node
NODE *HEAD= NULL;

// define a function to insert an element
NODE* insertElement(int elem, NODE* prev= NULL){
    //create a node and store elem
    NODE *newNode = new NODE;
    newNode->data = elem;
    newNode->next = NULL;

    //case 1: inserting at head
    if(prev == NULL){
        newNode->next = HEAD;
        HEAD = newNode;
    }
    else{//case 2
        newNode->next = prev->next;
        prev->next = newNode;
    }
    return newNode;
}

void traverse(){
    NODE* curr = HEAD;
    cout<<endl;
    while(curr != NULL){
        cout<<curr->data<< " ";
        curr = curr->next;

    }
}

//implement search
void searchItem(int n)
{
    NODE *ptr=HEAD;
    cout<<endl;
    while(ptr->data!=n && ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==n)
    {
        cout<<n<<" is found"<<endl;
    }
    else
    {
        cout<<n<<" is not found"<<endl;
    }
}

void deletedata(int n){
    NODE* ptr= HEAD;
    NODE* previous = NULL;

    if(ptr!=NULL && ptr->data==n){
        HEAD=ptr->next;
         cout<<"\n"<<n<<" Deleted. ";
        delete ptr;
        return;
    }

    while(ptr->data!=n && ptr->next!=NULL)
    {
        previous=ptr;
        ptr=ptr->next;
    }
    if(ptr->data==n){
        previous->next= ptr->next;
        cout<<"\n"<<n<<" Deleted. ";
        delete ptr;
    }
    else{
        cout<<"\n"<<n<<" is not in the list";
    }
}

int main(){

    insertElement(1);
    NODE* address = insertElement(8);
    insertElement(9);
    insertElement(2, address);
     traverse();

    searchItem(1);

    deletedata(8);
traverse();

}
