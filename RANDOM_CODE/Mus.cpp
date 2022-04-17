#include <iostream>
#include <cstdio>
#include<string.h>
using namespace std;
#define MAXSIZE 50

char q[MAXSIZE];
int front;
int rear;

void enqueue(char element);
int dequeue();
bool isQueueEmpty();
int queueSize();
bool isQueueFull();
void display_queue();

void enqueue(char element) {
    if(isQueueFull())
        cout<<"\n Queue is full"<<endl;
    else if(isQueueEmpty()){
        front=rear=0;
        q[rear] = element;
    }
    else {
        rear++;
        q[rear] = element;
    }
}

bool isQueueEmpty()
{
    if(front == -1 && rear == -1) return true;
    else return false;
}

bool isQueueFull()
{
    if (rear == (MAXSIZE-1)) return true;
    else return false;
}

int queueSize() {
    return rear-front+1;
}

void displayQueue() {
    if(isQueueEmpty())
        cout<<"Queue is empty! Nothing to show"<<endl;
    else{
        for(int i = front; i <= rear; i++)
            cout<<q[i]<<"  ";
    }
    cout<<endl;
}

int main ()
{
    front=rear=-1;
    char  q1[50];
    cout << "Enter a string : " ;
   gets(q1);


    for (int i = 0; i < strlen(q1); ++i)
    {
        if (tolower(q1[i]) == 'a'
            || tolower(q1[i]) == 'e'
                || tolower(q1[i]) == 'i'
                    || tolower(q1[i]) == 'o'
                        || tolower(q1[i]) == 'u' )
            enqueue(q1[i]);
    }

    cout << "Number of vowels : " << queueSize() <<endl;
    displayQueue();
    return 0;
}
