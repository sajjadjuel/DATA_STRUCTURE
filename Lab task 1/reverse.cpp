#include<iostream>
#include<string.h>

using namespace std;
int main(void)
 {
      int n=10;
       int i;

        int a[n];
        cout<<"Take 10 number of inputs respectively : "<<endl;
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cout<<"\nCurrent order : ";
           for(i = 0; i < n; i++)
                   cout<< a[i]<<" ";
                    cout<<endl;
                     cout<<"Reverse order : ";
                    for(i = n-1; i >= 0; i--)

                        cout<<a[i]<<" ";

                        cout<<endl<<endl;
        return 0;
}
