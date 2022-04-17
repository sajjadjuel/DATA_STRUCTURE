#include<iostream>
#define MAX 100
 using namespace std;
  int STACK[MAX],TOA;
   void initStack()
   { TOA=-1; }
   int isEmpty()
   {
       if(TOA==-1)
        return 1;
    else
        return 0;
    }
    int isFull()
    {
        if(TOA==MAX-1)
            return 1;
            else
                return 0;
}
void push(int element)
{ if(isFull())
    { cout<<"STACK is FULL."<<endl;
     return;
     }
     else
     {
         ++TOA;
      STACK[TOA]=element;
      cout<<element<<" has been pushed."<<endl;
     }

}
void display()
{ int i;
if(isEmpty())
    {
         cout<<"STACK is EMPTY."<<endl;
                return;
    }
    for(i=TOA;i>=0;i--)
        { cout<<STACK[i]<<" ";
         } cout<<endl;
} //pop - to remove item
void pop()
{ int temp;
 if(isEmpty())
    { cout<<"STACK is EMPTY."<<endl; return;
    }
    temp=STACK[TOA];
    TOA--;
    cout<<temp<<" has been POPPED."<<endl;
}
int main()
{
    int input;
    initStack();
    char ch;
    do{ int a;
    cout<<"Chosse \n1.push\n"<<"2.pop\n"<<"3.show element\n";
    cout<<"Enter your choice: ";
    cin>>a;
    switch(a)
    {
         case 1:
             cout<<"Enter an Integer Number: ";
             cin>>input; push(input);
             break;
             case 2:
                  pop();
                  break;
                  case 3:
                      display();
                      break;
                      default :
                          cout<<" Invalid Choice \n";
                          }
                          cout<<"Do you want to continue ? Y/N = ";
                          cin>>ch;
                          }while(ch=='Y'||ch=='y');
return 0;
}
