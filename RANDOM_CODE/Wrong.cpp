#include<iostream>
#include<stack>
using namespace std;

int expression(char c)
{
    if(c=='+' || c=='-')
    {
      return 1;
    }
    else if(c=='*' || c=='/')
    {
      return 2;
    }
    else
    {
      return 0;
    }
}

string convert(string infix )
{
   stack<char> stk;
   stk.push('#');
   string postfix = "";
   //string::iterator i;

   for(int i =0; i<infix.length(); i++)
    {
      if(isalnum(char(i)))
         postfix += i;
      else if(i == '(')
         stk.push('(');
      else if(i == ')')
      {
        while(stk.top() != '#' && stk.top() != '(')
        {
            postfix += stk.top();
            stk.pop();
        }
        stk.pop();
      }
        else
        {
         if( expression(i) > expression(stk.top()) )
             stk.push(i);
         else
         {
           while( stk.top() != '#' && expression(i) <= expression(stk.top()) )
           {
               postfix += stk.top();
               stk.pop();
           }
           stk.push(i);
         }
       }
    }

   while(stk.top() !='#')
    {
      postfix += stk.top();
      stk.pop();
    }

   return postfix;
}

int main()
{
   string infix;
   cout << "Enter Infix form : ";
   cin>> infix;
   cout << "Postfix form is: " << convert(infix) << endl;
   return 0;
}

