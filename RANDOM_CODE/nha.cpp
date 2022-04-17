#include <iostream>
using namespace std;

void calc(int n)
{
    int i=0;
float s=0;
  while(n>=s)
        s+=(1.0/++i);
    cout<<s;
}

int main()
{
    int n;
    cout<<"Enter the Value of 'n': ";
    cin>>n;
    calc(n);
}
