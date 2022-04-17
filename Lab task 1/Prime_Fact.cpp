#include<iostream>
#include<string.h>
using namespace std;
int Prime(int n)
 {
   int i, c=0;
   for(i=2; i<=n/2; ++i)
    {
      if(n%i==0)
      {
      c++;
      }
   }
   if (c==0)
   {
        int f=1;
       for (int i=1;i<=n;i++)
       {
             f=i*f;
       }
       cout<<f;

   }
   else
   {
        cout<<"ERROR! Not a prime number"<<endl;
   }
}
int main()
{
    int n;
    cout<<"Enter A Number to check:";
    cin>>n;
   Prime(n);
   return 0;
}
