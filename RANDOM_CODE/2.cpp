#include <iostream>
using namespace std;
int stack[10], n = 100, top = -1;
//function prototype declaration
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


int push(int a) {
   if(isFull())
      cout<<"\n Stack Overflow\n"<<endl;
   else {
      top++;
      stack[top] = a;
    //  cout<<"The pushed element is : "<<stack[top]<<endl<<endl;
   }
   return stack[top];
}




void pop() {
   if(isEmpty())
      cout<<"\nStack Underflow\n"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}


int main()
{  int w,w1;
//int l=0;
    int option,n, value;
//    stack_initialize();



    for(int i=0; i<5;i++)
    {
        cin>>w;
        push(w);
    }
for(int j=5; j<10;j++)
    {
        cin>>w;
        push(w);
    }
    for(int i=0,j=10; i<5;i++,j--)
    {

     cout<< stack[i]<<endl;cout<< stack[j]<<endl;

    }
}
