#include <iostream>
#include<math.h>
using namespace std;

void calc(int X)
{
    float X1,X2,x=0;

    X1=cos(2*X);
    X2=2*(cos(X)*cos(X))-1;
    x=X1/X2;
    do{
        if(x==1)
        {cout<<"TRUE";
        break;}
    else
        {cout<<"False";
        break;}
    }while(x!='\0');

}

int main()
{
    int n;
    cout<<"Enter a Value for Check --> ";
    cin>>n;
    calc(n);
}
/*
#include <iostream>
#include<math.h>
using namespace std;

void calc(int X)
{
    float X1,X2,x=0;
    X1=cos(2*X);
    X2=2*(cos(X)*cos(X))-1;
    x=X1/X2;
    if(x==1)
        cout<<"TRUE";
    else
        cout<<"False";
}

int main()
{
    int n;
    cout<<"Enter a Value for Check --> ";
    cin>>n;
    calc(n);
}
*/

