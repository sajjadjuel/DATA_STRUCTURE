#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;
};

class LinkedList{
private:
    Node *head;
    Node *tail;
    int sizeOfList;

public:
    LinkedList(){
        head = NULL;
        tail = NULL;
        sizeOfList = 0;
    }

    Node *getNewNode(){
        Node *n = new Node;
        n->next = NULL;
        n->prev = NULL;

        return n;
    }

    int getData(){
        int d;
        cout<<"Input node data: ";
        cin>>d;

        return d;
    }

    void addData(int x, Node *n){
        n->data = x;
    }

    Node *createNewNode(){
        Node *n = getNewNode();
        addData(getData(),n);

        return n;
    }

    void createList(int numOfNodes){
        Node *temp;
        if(numOfNodes > 0){
            head = tail = createNewNode();

            for(int i=0; i<(numOfNodes-1); i++){
                temp = createNewNode();
                tail->next = temp;
                temp->prev = tail;
                tail = tail->next;
            }
        }

        sizeOfList = numOfNodes;
    }

    void showList(){
        if(sizeOfList > 0){
            Node *n = head;

            while(n!=NULL){
                cout<<n->data<<" ";
                n = n->next;
            }

            cout<<endl;

        }else{
            cout<<"List is empty";
        }
    }

    void reverseShowList(){
        if(sizeOfList > 0){
            Node *n = tail;

            while(n!=NULL){
                cout<<n->data<<" ";
                n = n->prev;
            }

            cout<<endl;

        }else{
            cout<<"List is empty";
        }
    }

    void insertAtHead(Node *newNode){
        if(head == NULL){
            head = tail = newNode;

        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        sizeOfList++;
    }

    void insertAtTail(Node *newNode){
        if(head == NULL){
            head = tail = newNode;

        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        sizeOfList++;
    }

    void insertAtAnyPosition(int pos, Node *newNode){

        if(pos<0 || pos>sizeOfList){
            cout<<"Invalid Position. Nothing can be inserted.\n";
            return ;

        }else if(pos == 0){
            insertAtHead(newNode);

        }else if(pos == sizeOfList){
            insertAtTail(newNode);

        }else{
            Node *t1 = head;
            Node *t2;

            for(int i=0; i<pos-1; i++){
                t1 = t1->next;
            }

            t2 = t1->next;

            t1->next = newNode;
            newNode->next = t2;
            t2->prev = newNode;
            newNode->prev = t1;
        }

        sizeOfList++;

    }

    void removeFromHead(){
        Node *prevHead = head;

        if(head == NULL){
            cout<<"Empty list! Nothing to be removed!\n";
            return ;

        }else if(head->next == NULL){
            head = tail = NULL;

        }else{
            head = head->next;
            head->prev = NULL;
        }

        delete prevHead;
        sizeOfList--;
    }

    void removeFromTail(){
        Node *lastTail = tail;

        if(head == NULL){
            cout<<"Empty list! Nothing to be removed!\n";
            return ;

        }else if(head->next == NULL){
            head = tail = NULL;

        }else{
            tail = tail->prev;
            tail->next = NULL;
        }

        delete lastTail;

        sizeOfList--;
    }

    void removeFromAnyPosition(int pos){
        if(pos<0 || pos>=sizeOfList){
            cout<<"Invalid position. Nothing can be removed!\n";
            return ;

        }else if(pos == 0){
            removeFromHead();

        }else if(pos == (sizeOfList-1)){
            removeFromTail();

        }else{
            Node *t1 = head;
            Node *t, *t2;

            for(int i=0; i<pos-1; i++){
                t1 = t1->next;
            }

            t = t1->next;
            t2 = t->next;
            t1->next = t2;
            t2->prev = t1;

            delete t;
        }

        sizeOfList--;
    }

    int getSizeOfList(){
        return sizeOfList;
    }

	//Write this function yourself. Take help from the showList function.
	//Search whether the value exists as a data in any of the node from the list.
	//If found, print out "FOUND!". Else "NOT FOUND!".
	void searchList(int value){
	    bool found = false;
        if(sizeOfList > 0){
            Node *n = head;

            while(n!=NULL){
                if(n->data == value){
                    cout<<"Data Found!";
                    found = true;
                    break;
                }
                n = n->next;
            }

            if(!found){
                    cout<<"Not Found!";
            }

            cout<<endl;

        }else{
            cout<<"List is empty! Nothing to search!";
        }
	}

};

int main(){
    LinkedList list_1;
    int s, p;

    cout<<"Enter the size of the list: ";
    cin>>s;

    cout<<"Creating list...\n\n";
    list_1.createList(s);
    cout<<"\n***List created***\n\n";

    cout<<"Printing list...\n";
    list_1.showList();
    list_1.reverseShowList();
    cout<<"Current size: "<<list_1.getSizeOfList()<<endl;

    cout<<"\nInserting a new node at the beginning of the list...\n";
    list_1.insertAtHead(list_1.createNewNode());
    cout<<"Printing list...\n";
    list_1.showList();
    list_1.reverseShowList();
    cout<<"Current size: "<<list_1.getSizeOfList()<<endl;

    cout<<"\nInserting a new node at the end of the list...\n";
    list_1.insertAtTail(list_1.createNewNode());
    cout<<"Printing list...\n";
    list_1.showList();
    list_1.reverseShowList();
    cout<<"Current size: "<<list_1.getSizeOfList()<<endl;

    cout<<"\nInserting a new node at a given position of the list...\n";
    cout<<"Enter the position: ";
    cin>>p;
    list_1.insertAtAnyPosition(p, list_1.createNewNode());
    cout<<"Printing list...\n";
    list_1.showList();
    list_1.reverseShowList();
    cout<<"Current size: "<<list_1.getSizeOfList()<<endl;

    cout<<"\nRemoving the first node of the list...\n";
    list_1.removeFromHead();
    cout<<"Printing list...\n";
    list_1.showList();
    list_1.reverseShowList();
    cout<<"Current size: "<<list_1.getSizeOfList()<<endl;

    cout<<"\nRemoving the last node of the list...\n";
    list_1.removeFromTail();
    cout<<"Printing list...\n";
    list_1.showList();
    list_1.reverseShowList();
    cout<<"Current size: "<<list_1.getSizeOfList()<<endl;

    cout<<"\nRemoving a node from a given position of the list...\n";
    cout<<"Enter the position: ";
    cin>>p;
    list_1.removeFromAnyPosition(p);
    cout<<"Printing list...\n";
    list_1.showList();
    list_1.reverseShowList();
    cout<<"Current size: "<<list_1.getSizeOfList()<<endl;
}

