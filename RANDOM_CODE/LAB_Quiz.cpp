#include <iostream>
#include<conio.h>
using namespace std;

class MyStack{
int *Stack, Toa, MaxSize;

public:
MyStack()
{
    MaxSize = 5;
	Stack = new int[MaxSize];
	Toa = -1;
}
~MyStack()
{
    delete [] Stack;
}
void resize()
{
MaxSize=MaxSize++;
int* TempStack = new int [MaxSize];
for(int i=0; i<MaxSize; i++){
     TempStack[i]=Stack[i];}
      Stack=TempStack;
}

bool isEmpty()
{
   if (Toa==-1)
        return true;
    else
        return false;
}
bool IsFull()
{
    if (Toa>=MaxSize-1)
        return true;
    else
        return false;
}
void push(int value)
{
   if(IsFull()){
 resize();
Toa++;
Stack[Toa]=value;
cout<<"New Memory Has Been Created."<<endl;
cout<<"\nThe pushed value is : "<<Stack[Toa]<<endl<<endl;
 }
 else {
      Toa++;
      Stack[Toa] = value;
      cout<<"The pushed value is : "<<Stack[Toa]<<endl<<endl;
   }

}
void pop()
{
     if(isEmpty())
      cout<<"\nStack Underflow\n"<<endl;
   else {
      cout<<"The popped value is "<< Stack[Toa] <<endl;
      Toa--;
}
}
void print()
{
     if(!isEmpty()) {
      cout<<"\nStack values are : ";
      for(int i = Toa; i>= 0; i--)
         cout<<Stack[i]<<" ";
      cout<<endl<<endl;
   } else
      cout<<"Stack is empty\n";
}
};

int main()
{
    MyStack m1;
    m1.pop();
    m1.push(5);
    m1.push(6);
    m1.push(7);
    m1.push(8);
    m1.push(9);
    m1.push(0);
    m1.print();
    m1.pop();
    m1.pop();
    m1.print();
getch();

}

