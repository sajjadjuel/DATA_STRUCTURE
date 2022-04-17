#include <iostream>
#include<stack>
#include<math.h>
using namespace std;
int convert(string y)
{
    int len = y.size();
    int res = 0;
    for(int i = 0; i<len; i++)
    {
        int val = y[i] - '0';
        res = res*10 + val;
    }
    return res;
}
string Convert(int y)
{
    string res="";
    while(y > 0)
    {
        char val = y%10 + '0';
        res = res + val;
        y = y/10;
    }
    int j = res.size() - 1;
    for(int i = 0; i<j; i++)
    {
        char temp = res[i];
        res[i] = res[j];
        res[j] = temp;
        j--;
    }
    return res;
}
string compute(string op, string x, string y)
{
    int a = convert(x);
    int b=convert(y);
    int res1;
    switch(op[0])
    {
    case '^':
        res1 = round(pow(b,a));
        break;
    case '*':
        res1 = b*a;
        break;
    case '/':
        res1 = b/a;
        break;
    case '+':
        res1 = b+a;
        break;
    case '-':
        res1= b-a;
        break;
  }
    string X = Convert(res1);
    return X;
}
int main()
{
    stack<string>conv;
    string postfix[100]= {};
    int cnt = 0;
    cout<<"Enter an postfix expression and press enter,press . to end: "<<endl;
    string x;
    while(cin>>x)
    {
        if(x!=".")
        {
            postfix[cnt]=x;
            cnt++;
        }
        else
            break;
    }
    int len=cnt;
    for(int i=0;i<len;i++)
    {
        string sym="";
        sym=sym + postfix[i];
        if(isdigit(sym[0]))
        {
            conv.push(sym);
        }
        else
        {
            string x=conv.top();
            conv.pop();
            string y=conv.top();
            conv.pop();
            string ans=compute(sym,x,y);
            conv.push(ans);

        }
    }
    cout<<"The result is "<<conv.top()<<endl;
}
