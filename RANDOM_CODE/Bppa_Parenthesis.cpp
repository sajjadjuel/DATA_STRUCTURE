#include <iostream>
#include<stack>
using namespace std;


bool BalanceCheck(string ex)
{
    stack<char> s;
    char x;

    for (int i = 0; i < ex.length(); i++)
    {
        if (ex[i] == '(' || ex[i] == '['
            || ex[i] == '{')
        {

            s.push(ex[i]);
            continue;
        }


        if (s.empty())
            return false;

        switch (ex[i]) {
        case ')':


            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':


            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':


            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return (s.empty());
}


int main()
{
    string ex ;
    cout<<"Enter an Expression To Check : ";
    cin>>ex;


    if (BalanceCheck(ex))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
