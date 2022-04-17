#include <iostream>
using namespace std;
int stack[5], n = 5, top = -1;

bool isFull()
{
    if (top>=n-1)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if (top==-1)
        return true;
    else
        return false;
}


bool TopElement()
{
    if (isEmpty())
        cout<<"\nEmpty Stack"<<endl;
    else
       cout<<"\nTop = Stack ["<<top<<"] = "<<stack[top]<<endl;
}


void push(int a) {
   if(isFull())
      cout<<"\n Stack Overflow\n"<<endl;
   else {
      top++;
      stack[top] = a;
      cout<<"The pushed element is : "<<stack[top]<<endl<<endl;
   }
}




void pop() {
   if(isEmpty())
      cout<<"\nStack Underflow\n"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}

void display() {
   if(!isEmpty()) {
      cout<<"\nStack elements are : ";
      for(int i = top; i>= 0; i--)
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack is empty";
}
int main() {
   int  a;
   isEmpty();

   pop();
            push(5);
            push(3);
            push(2);
            push(1);
            push(9);
            push(7);
            display();
            TopElement();

            pop();
            pop();
            TopElement();

            display();

            cout<<endl<<"Value of index 4 is : "<<stack[4]<<endl;

   return 0;
}

