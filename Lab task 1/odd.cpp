#include<iostream>
#include<string.h>
using namespace std;
int func(int a,int b)
{

    for (int i=a; i<=b; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<" ";
        }
        else{}
    }

}
int main()
{
    int a,b;
    cout<<"Starting Value : ";
    cin>>a;
    cout<<"Ending Value   : ";
    cin>>b;
    func(a,b);
}
