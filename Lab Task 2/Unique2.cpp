#include <iostream>

using namespace std;

int main()
{
    int arr1[100], arr2[100],r=0;
    int size, i, j, count;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr1[i];
        arr2[i] = -1;
    }


    for(i=0; i<size; i++)
    {

        for(j=i+1; j<size; j++)
        {
            if(arr1[i]==arr1[j])
            {   r++;
                count++;
                arr2[j] = 0;
            }
        }
        if(arr2[i] != 0)
        {
            arr2[i] = count;

        }

    }


    cout<<"\nFrequency of all elements of array : \n";
    for(i=0; i<size; i++)
    {
        if(arr2[i] != 0)
        { if(r>0)
            {cout<<arr1[i]<<endl;}

        }
    }
    if(r==0)
    {cout<<"all are uniques";}
}
