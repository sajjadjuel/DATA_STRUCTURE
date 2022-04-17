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
    while(curr != NULL){
        cout<<curr->data<< " ";
        curr = curr->next;
    }
}


//implement search
//implement delete

int main(){
    //make a list
    insertElement(1);
    NODE* address = insertElement(8);
    insertElement(9);
    insertElement(2, address);

    //show the list
    traverse();

}
