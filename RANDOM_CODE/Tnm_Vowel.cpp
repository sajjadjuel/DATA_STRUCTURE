#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int r;
class queue
{
private:
    int front;
    int rear;
   char arr[5];
    int itemcount;
public:
    queue()
    {
        itemcount=0;
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}


    bool isEmpty()
    {
        if(front==-1&&rear==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull()
    {
        if((rear+1)%5==front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(char val)
    {
        if(isFull())
        {
            cout<<"Queue is Full"<<endl;
            return;
        }
        else if(isEmpty())
        {
            rear=0;
            front=0;
            arr[rear]=val;
        }
        else
        {
            rear=(rear+1)%5;
            arr[rear]=val;
        }
        itemcount++;
    }
int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        {
    if (isVowel(str[i]))
     enqueue(str[i]);}
}
    int dequeue()
    {
        int x=0;
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return 0 ;
        }
        else if(front==rear)
        {
            x=arr[front];
            arr[front]=0;
            rear=-1;
            front =-1;
            return x;
        }
        else
        {
            x=arr[front];
            arr[front]=0;
            front=(front +1)%5;
            return x;
        }
    }
    int count()
    {
        return (rear-front+1);
    }
    void display()
    {
        cout<<"All the values in the queue are "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
   // int countVowels(string str);
     queue q1;
    int option,value;
    string str ;
    cout<<"Input a string :";

getline(cin,str);
q1.countVowels(str);

    q1.display();

}
