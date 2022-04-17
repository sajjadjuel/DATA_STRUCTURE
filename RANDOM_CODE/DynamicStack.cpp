#include <iostream>
using namespace std;

class MyStack{
int *Stack, Top, MaxSize;

public:
MyStack(int Size)
{
    MaxSize = Size; //get Size
	Stack = new int[MaxSize]; //create array accordingly
	Top = -1; //start the Stack
}
~MyStack()
{
    delete [] Stack;
}
void ResizeArray(int Size){
MaxSize=MaxSize+Size;
int* TempStack = new int [MaxSize];
for(int i=0; i<MaxSize; i++){
     TempStack[i]=Stack[i];}
      Stack=TempStack;}

bool isEmpty()
{
   if (Top==-1)
        return true;
    else
        return false;
}
bool IsFull()
{
    if (Top>=MaxSize-1)
        return true;
    else
        return false;
}
void push(int Element)
{
   if(IsFull()){ cout<<"Stack Overflow!"<<endl;
 ResizeArray(5);
Top++;
Stack[Top]=Element;
cout<<"new space created."<<endl;
cout<<"\nThe pushed element is : "<<Stack[Top]<<endl<<endl;
 }
 else {
      Top++;
      Stack[Top] = Element;
      cout<<"The pushed element is : "<<Stack[Top]<<endl<<endl;
   }

}
void pop()
{
     if(isEmpty())
      cout<<"\nStack Underflow\n"<<endl;
   else {
      cout<<"The popped element is "<< Stack[Top] <<endl;
      Top--;
}
}
void TopElement()
{
    if (isEmpty())
        cout<<"\nEmpty Stack"<<endl;
    else
       cout<<"\nTop = Stack ["<<Top<<"] = "<<Stack[Top]<<endl;
}
void show()
{
     if(!isEmpty()) {
      cout<<"\nStack elements are : ";
      for(int i = Top; i>= 0; i--)
         cout<<Stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack is empty";
}







};
int main()
{
    MyStack m1(5);
    m1.pop();
    m1.push(5);
    m1.push(6);
    m1.push(7);
    m1.push(8);
    m1.push(9);
    m1.push(0);
    m1.show();


}


