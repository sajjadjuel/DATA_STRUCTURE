#include <iostream>
#include<conio.h>
using namespace std;
int arr[]={10,20,30,40,50};
int n=sizeof(arr)/sizeof(*arr);

int queue[10], f = - 1, r = - 1;
int stack[10],  toa = -1;

void push(int a) {
   if(toa >= n-1)
      cout<<"\n Stack Overflow\n"<<endl;
   else {
      toa++;
      stack[toa] = a;
      //cout<<"The pushed element is : "<<stack[toa]<<endl;
   }
}

void enqueue(int a) {
   if(r >= n-1)
      cout<<"\nQueue Overflow\n"<<endl;
   else {
        f=0;
      r++;
      queue[r] = a;
     // cout<<"Queue inserted in queue is : "<<queue[r]<<endl;
   }
}
void dequeue() {
   if (f == - 1 || f > r) {
      cout<<"Queue Underflow ";
      return ;
   }
   else if (f == r || f ==-1) {
    //cout<<"Element deleted from queue is : "<< queue[f] <<endl;
    push(queue[f]);
      f=r=-1;
      return ;
   }

   else {
      cout<<"Element deleted from queue is : "<< queue[f] <<endl;
      f++;
   }
}



void pop() {
   if(toa <= -1)
      cout<<"\nStack Underflow\n"<<endl;
   else {
      //cout<<"The popped element is "<< stack[toa] <<endl;
      cout<<stack[toa]<<" ";
      toa--;
   }
}

void display() {
   if(toa>= 0) {
      cout<<"Stack elements are:";
      for(int i = toa; i>= 0; i--)
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack is empty";
}


int main()
{
    int arr[]={10,20,30,40,50};
    int d=sizeof(arr)/sizeof(*arr);

    for (int i=0; i<d;i++)
    {
        enqueue(arr[i]);
        dequeue();
    }
     //display();
     cout<<"\nElements are : ";
    for (int i=0; i<d;i++)
    {

        pop();
    }
 getch();

}
