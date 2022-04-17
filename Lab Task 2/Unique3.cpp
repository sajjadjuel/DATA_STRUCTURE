#include<iostream>
using namespace std;

int main()
{
    int arr[100], dup[100];
    int size, i, j, count,s=0;


 cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];


    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                s++;
                count++;


               dup[j] = 0;
            }
          /*   else if(arr[i]!=arr[j])
            {
                un++;


               dup[j] = 0;
            }*/
        }


        if(dup[i] != 0)
        {
            dup[i] = count;
        }
    }
cout<<endl;
    for(i=0; i<size; i++)
    {
        if(dup[i] != 0)
        {
            if(s>0)
           cout<<arr[i]<<" ";


        }


    }

    if (s==0)
    {
         cout<<"Array Already Unique\n";
    }


    return 0;
}

