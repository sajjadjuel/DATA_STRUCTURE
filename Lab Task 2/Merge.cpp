#include<iostream>
#include<string.h>

using namespace std;
int main(void)
 {
       int i;

        int a[5];
        int b[8];

    cout<<"Array_1 : ";
        for(i = 0; i < 5; i++)
        {
            cin>>a[i];
        }

      cout<<"Array_2 : ";
        for(i = 0; i < 8; i++)
        {
            cin>>b[i];
        }
         cout<<"Reverse order : ";
                for(i = 7; i >= 0; i--)

                    cout<<b[i]<<" ";

       for(i = 4; i >= 0; i--)

                    cout<<a[i]<<" ";

                    cout<<endl<<endl;
        return 0;
}
