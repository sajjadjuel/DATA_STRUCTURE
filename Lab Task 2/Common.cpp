#include<iostream>
#include<string.h>

using namespace std;
int main(void)
 {
       int i,d=0;

        int a[5];
        int b[8];
        int c[15];

    cout<<"Array_1 : ";
        for(i = 0; i < 5; i++)
        {
            cin>>a[i];
        }

      cout<<"Array_2 : ";
        for(i = 0; i < 6; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<5;i++)
        {


        if (a[i]==b[i])
        {
           c[i]=a[i];
           cout<< c[i]<<" " ;
        }
        else if (b[i]==a[i])
        {
           c[i]=b[i];
           cout<< c[i]<<" " ;
        }
        else
        {
           d++;

        }

        }

if(d>0)
{
    cout<<" There is no common element!";
}
        return 0;
}

