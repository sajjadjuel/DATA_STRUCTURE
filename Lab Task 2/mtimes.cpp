#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int i;
    int n, count=0;

     cout<<"Array_1 : ";
      for(i = 0; i < 10; i++)
        {
            cin>>a[i];
        }
        cout<< " Input a number to search : ";
        cin>>n;

         for(i = 0; i < 10; i++)
        {
            if (a[i]==n)
            {
                count++;
            }
        }
    cout<< "\n The Number Occurs "<< count<<" times in the array.\n";
}


