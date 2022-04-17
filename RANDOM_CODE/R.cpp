#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
#define MAXSIZE 4

int q[MAXSIZE];
int front;
int rear;


void enqueue(int element);
int dequeue();
bool isQueueEmpty();
int queueSize();
bool isQueueFull();
void display_queue();



void enqueue(int element)
{
    if(isQueueFull()){
         cout<<"\t Queue is Full ..."<<endl;
    }
    else if(isQueueEmpty()){
        front=rear=0;
        q[rear] = element;
    }
    else{
        rear++;
        q[rear % MAXSIZE]=element;
    }
}

int dequeue()
{
    int dequeueElement=q[(front+1) % MAXSIZE];

    if(isQueueEmpty()){
        cout<<"queue is empty! dequeue not possible"<<endl;
        return NULL;
    }
    else if(front==rear){
            dequeueElement=q[front];
        front=rear=-1;
    }
    else{
        dequeueElement=q[front];
        front++;
    }
    return dequeueElement;

}

bool isQueueEmpty()
{
    if(front== -1 && rear == -1)
        return true;
    else
        return false;

}

bool isQueueFull()
{
    if ((rear +1)% MAXSIZE == front   )
        return true;
    else
        return false;

}

int frontElement(){
    if(isQueueEmpty())
        return NULL;
    else
        return q[front];
}

int queueSize()
{
    return rear-front+1;


}

void display_queue()
{
    if(isQueueEmpty()){
        cout<<"Queue is empty! Nothing to show"<<endl;
    }
    else{
           if(front <= rear)
           {
                for(int i=front;i<=rear;i++){
            cout<<q[i]<<"\t";
        }
           }
             else
             {
                 for( int i= front ; i<=(MAXSIZE-1); i++)
                    cout<<q[i];
             }

        }

        //for( int i=0;i<=rear; i++)
        //{
          //  cout<< q[i];
           // cout<<endl;
        //}
         //cout<<endl;
    }




int main()
{
enqueue(5);
enqueue(5);
display_queue();
    return 0;
}
