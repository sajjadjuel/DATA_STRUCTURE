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

    //your code here
    // display all elements of Queue from front to rear.


int main()
{
    front=rear=-1;
    int option,n, value;
     m:
          system("cls");
    cout<<"C++ program to implement Queue operations\n";
    do
    {

        cout<<"\n 1.Insert an element in Queue";
        cout<<"\n 2.Delete an element from Queue";
        cout<<"\n 3.Display Queue";
        cout<<"\n 4.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            system("cls");
           l:
                if(!isQueueFull())
            {int q;
            cout<<"How many elements you want to insert? ";
            cin>>q;
            if (q<=MAXSIZE)
            {
                system("cls");
                 cout<<" Insert The elements in Queue: ";
                for(int p=0;p<q;p++)
                {

                        cin>>n;
                        enqueue(n);
                }

            }
            else
            {
                int r=MAXSIZE;
                system("cls");
                 cout<<"Sorry You Can't insert more than "<<r<<" Elements at a Time.\n"<<endl;
                goto l;
            }




            }
            else
            {
                cout<<"Sorry Queue Is Full.  You Can't insert any Element"<<endl;
                system("cls");

            }

            break;
        case 2:
            system("cls");
            value = dequeue();
            if(value != NULL)
            {
                cout<<" Dequeue element is: "<<value<<endl;
                getch();
           goto m;
            }

            break;

        case 3:
            system("cls");
            display_queue();
            getch();
            system("cls");
            break;
        case 4:
            return 0;

        }
    }
    while(option!=4);

    return 0;
}
