#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool CheckParenthesis(char op,char cl)
{
	if(op == '(' && cl == ')')
        return true;
	else if(op == '{' && cl == '}')
        return true;
	else if(op == '[' && cl == ']')
        return true;
	return false;
}
bool CheckBalance(string exp)
{
	stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.empty() || !CheckParenthesis(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	if (!S.empty())
        return false;

	else
        return true;
	//return S.empty() ? true:false;
}

int main()
{
	string exp;
	cout<<"Enter an expression : ";
	cin>>exp;
	if(CheckBalance(exp))
		cout<<"Infix Expression has Valid Parenthesis\n";
	else
		cout<<"Infix Expression has Invalid Parenthesis\n";
}
