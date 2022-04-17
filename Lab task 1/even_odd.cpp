  #include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define num_size 10
int main()
{
   int num[num_size];
    int even,odd,i;
   even=odd=i=0;
    cout<<"Enter 10 Number Respectively : ";
    for(i=0;i<10;i++)
    {

      cin>>num[i];

        if (num[i]%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }

    }
    cout<<endl<<odd<<" Odd numbers"<<endl;
    cout<<even<<" Even numbers\n"<<endl;

}

