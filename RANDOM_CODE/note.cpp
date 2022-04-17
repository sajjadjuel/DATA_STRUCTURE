#include<iostream>
using namespace std;

int main()
{
    int m,t=0,count=0;
    int arr[]={1000,500,100,50,20,10,5,2};
    cout<<"Enter Amount : ";
    cin>>m;

    while(m<t)
    {
         if (m>arr[0])
        {
            //cout<<arr[0]<<" ";
            m=t+arr[0];
            count++;

            // goto l;
        }
         else if (m<arr[0] && m>=arr[1])
        {
           // cout<<arr[1]<<" ";
             m=t+arr[1];
            count++;

             // goto l;
        }
                 else if (m<arr[0] && m<arr[1] && m>=arr[2])
        {
            //cout<<arr[2]<<" ";
             m=t+arr[2];
            count++;

              //goto l;
        }
                 else if (m<arr[0] && m<arr[1] && m<arr[2] && m>=arr[3])
        {
            //cout<<arr[3]<<" ";
             m=t+arr[3];
            count++;

            //  goto l;
        }
                 else if (m<arr[0] && m<arr[1] && m<arr[2] && m<arr[3] && m>=arr[4])
        {
            //cout<<arr[4]<<" ";
             m=t+arr[4];
            count++;

              //goto l;
        }
                 else if (m<arr[0] && m<arr[1] && m<arr[2] && m<arr[3] && m<arr[4] && m>=arr[5])
        {
            //cout<<arr[5]<<" ";
             m=t+arr[5];
            count++;

             // goto l;
        }
                 else if (m<arr[0] && m<arr[1] && m<arr[2] && m<arr[3] && m<arr[4] && m<arr[5] && m>=arr[6])
        {
           // cout<<arr[6]<<" ";
             m=t+arr[6];
            count++;

             // goto l;
        }
                 else if (m<arr[0] && m<arr[1] && m<arr[2] && m<arr[3] && m<arr[4] && m<arr[5] && m<arr[6] && m>=arr[7])
        {
            //cout<<arr[7]<<" ";
             m=t+arr[7];
            count++;

              //goto l;
        }


    }
    cout<<endl<<count;

}
