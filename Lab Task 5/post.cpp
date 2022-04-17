#include<iostream>
#include<stack>
#include<queue>
using namespace std;
 stack<char> stk;
   queue<char> q;
int queue[n], n = 5, f = - 1, r = - 1;
int stack[n], toa = -1;
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

string convert(string a )
{

   q.push(')');
 stk.push('(');

     int i;
     char op;
        for(i=0;i<a.length();i++)
        {
            do
      {
        op=a[i];
        if (operand(op))
            q.push(op);
        else if (Operator(op))
        {
            if (op=='(')
                stk.push(op);
            else if(op==')')
            {
                while (stk.top()!='(')
                {

                    q.push(stk.top());
                   stk.pop();
                }
                       stk.pop();
                }

            }
            else
                {
                    if (precedence(op) <= precedence(stk.top()))
                    {

                            q.push(stk.top());
                           stk.pop();
                    }
                    //stk.push(op);

                }

        }while (op<0);

        }
return 0;
}

int main()
{
   string infix;
   cout << "Enter Infix form : ";
   cin>> infix;
   cout << "Postfix form is: " << convert(infix) << endl;
   return 0;
}
