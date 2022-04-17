#include<iostream>
using namespace std;

int main()
{
    int arr[100], dup[100];
    int size=10, i, j, count;




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
                count++;


               dup[j] = 0;
            }
        }


        if(dup[i] != 0)
        {
            dup[i] = count;
        }
    }

    for(i=0; i<size; i++)
    {
        if(dup[i] != 0)
        {
           cout<<arr[i]<<" Occurs = "<<dup[i]<<" Times"<<endl;

        }
    }


    return 0;
}
