#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;

bool isOperator(char ch)
{
 if(ch == '+' || ch=='-' ||ch == '*' || ch== '/' ||ch == '^')
    return true;
   else
   return false;
}

  int precedence(char ch)
   {

    if(ch == '*' || ch == '/')
    return 2;
    else if(ch == '+' || ch == '-')
    return 1;
    else
    return -1;
  }

  string convert(stack<char> s, string infix)
 {
   string postfix;
   for(int i=0;i<infix.length();i++)
   {
      /* s.push('(');
       int q=infix.length();
       infix[q]=')';*/
     if((infix[i] >= 'a' && infix[i] <= 'z')||(infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= '0' && infix[i] <= '9'))
   {
    postfix+=infix[i];
   }
   else if(infix[i] == '(')
   {
    s.push(infix[i]);
   }
   else if(infix[i] == ')')
   {
   while((s.top()!='(') && (!s.empty()))
  {
   char temp=s.top();
    postfix+=temp;
    s.pop();
   }
   if(s.top()=='(')
   {
   s.pop();
   }
   }
   else if(isOperator(infix[i]))
   {
    if(s.empty())
   {
   s.push(infix[i]);
   }
   else
   {
   if(precedence(infix[i])>precedence(s.top()))
   {
   s.push(infix[i]);
   }
   else if((precedence(infix[i])==precedence(s.top()))&&(infix[i]=='^'))
    {
     s.push(infix[i]);
    }
    else
   {
     while((!s.empty())&&( precedence(infix[i])<=precedence(s.top())))
       {
        postfix+=s.top();
         s.pop();
        }
        s.push(infix[i]);
      }
    }
  }
 }
 while(!s.empty())
 {
 postfix+=s.top();
 s.pop();
 }

 return postfix;
}

int main()
{

  	string infix, postfix;
  	cout<<"Enter a Infix Expression : ";
  	cin>>infix;
  	stack <char> stack;
  	cout<<endl<<"Postfix Expression : "<<convert(stack, infix);

 getch();
}
