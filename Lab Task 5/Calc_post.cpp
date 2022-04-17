#include<iostream>
#include<queue>
#include<stack>
using namespace std;
 queue<char> q;
 stack<char> s;
 bool isOperator(char ch)
{
 if(ch == '+' || ch=='-' ||ch == '*' || ch== '/' ||ch == '^')
    {
    return true;
    }
   else
    {
   return false;
    }
}
/*int cal(char ol, char op, char or)
/*{
    int r;
    if (op=='+')
        r=ol+or;
    else if (op=='-')
        r=ol-or;
    else if (op=='*')
        r=ol*or;
    else if (op=='/')
        r=ol/or;

}*/
 string calc(string infix)
 {
     char op;
     for(int i=0;i<infix.length();i++)
     {
          while (q.front()!=')')
        do
     {
       op = q.front();
        q.pop();
      if((infix[i] >= 'a' && infix[i] <= 'z')||(infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= '0' && infix[i] <= '9'))
      {
          s.push(op);
      }
      else if(isOperator())
      {
          int or=s.top();
          s.pop();
          int ol=s.top();
          s.pop();
         int x=ol+or;
          s.push(x);
      }
     }
     int result=s.top();
     }


 }

    int main()
    {
        string infix;
        cin>>infix;
        cout<<calc(infix);
    }
