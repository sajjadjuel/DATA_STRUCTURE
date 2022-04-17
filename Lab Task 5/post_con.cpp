#include <iostream>
#include<stdlib.h>
#include<stack>
#define n 100
using namespace std;
int stack[n], top = -1;
int queue[n], f = - 1, r = - 1;
/*bool isFull()
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
*/

bool TopElement()
{
    if (top==-1)
        cout<<"\nEmpty Stack"<<endl;
    else
       return stack[top];
}
void enqueue(char a) {
   if(r >= n-1)
   {
        cout<<"\nQueue Overflow\n"<<endl;
        exit(1);
   }


   else {
        f=0;
      r++;
      queue[r] = a;
     // cout<<"Stack inserted in queue is : "<<queue[r]<<endl;
   }
}


void push(char a) {
   if(top >= n-1)
      cout<<"\n Stack Overflow\n"<<endl;
   else {
      top++;
      stack[top] = a;
      cout<<"The pushed element is : "<<stack[top]<<endl;
   }
}




void pop() {
   if(top <= -1)
      cout<<"\nStack Underflow\n"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}

void Display() {
   if (f == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = f; i <= r; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}

bool Operator(char op)
{
    if (op=='(' || op==')' || op=='^' || op=='+' || op=='-' || op=='*' || op=='/' )
        return true;
    else
        return false;
}
bool operand(char op)
{
    if( op>='0' && op<=9 ||op>='a' && op<='z' || op>='A' && op<='Z')
        return true;
    else
        return false;
}
int precedence(char symbol)
{
	if(symbol == '^')
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
int convert(string a)
{
    /*
      int i=0;
        while (a[i++]!='\0');
        a[i+1]='\0';
        a[i--]=')';
    */
 enqueue(')');
 push('(');

     int i;
     char op;
        for(i=0;i<a.length();i++)
        {
            do
      {
        op=a[i];
        if (operand(op))
            enqueue(op);
        else if (Operator(op))
        {
            if (op=='(')
                push(op);
            else if(op==')')
            {
                while (TopElement()!='(')
                {

                    enqueue(TopElement());
                    pop();
                }
                        pop();
                }

            }
            else
                {
                    if (precedence(op) <= precedence(TopElement()))
                    {

                            enqueue(TopElement());
                            pop();
                    }
                     push(op);
                }
        }while (top>0);

        }

Display();
 }
int main()
{
    string a;
    cin>>a;
    stack <char> stack;
    convert(a);
     //Display();
}
