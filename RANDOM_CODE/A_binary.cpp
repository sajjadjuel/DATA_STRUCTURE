#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// print array
void printArray(int a[], int n)
{
    cout<<"Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int binarySearch (int a[], int n, int key){
    int first = 0, last = n-1, pos = -1, mid;

    while(first<=last){

            mid = (first+last)/2;
        if(a[mid]==key)
        {
            pos=mid+1;
               return pos;
        }

        else if(a[mid]>key)
        {
            last=mid-1;

        }
        else if(a[mid]<key)
        {
            first=mid+1;

        }


    }

    return pos;



}

int main()
{
    while(1)
    {
        int arrSize;
        cout<<"\nEnter array size: ";
        cin>>arrSize;

        int arr[arrSize];

        // input
        time_t t;
        srand(time(&t));

        arr[0]= rand()%100;
        for(int i=1; i<arrSize; i++)
        {
            //cout<<"a["<<i<<"]=";
            //cin>>arr[i];
            arr[i]= arr[i-1]+rand()%10;
        }
        printArray(arr,arrSize);
        int value;
        cout<<"Enter a value to search: ";
        cin>>value;
        int index = binarySearch(arr,arrSize, value);
        if (index==-1){
           cout<<"\nNot Found"<<endl;
        }
        else
        { cout<<"\nposition: "<<index<< endl;

        }
    }
}
