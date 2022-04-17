#include<iostream>
#include<stdlib.h>
//#include "bubble.cpp"

using namespace std;

void getArray(int arr[], int n)
{
  for(int i=0; i < n ; i++)
    cin >> arr[i];
}

void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void BubbleSort(int arr[], int n)
{
  bool swapped = false;
  do {
    swapped = false;
    for( int i=0 ; i < n -1 ; i++ )
      if( arr[i] > arr[i+1] )
      {
        swap( arr, i, (i+1) );
        swapped = true;
      }
  } while(swapped);
}


// print array
void printArray(int a[], int n)
{
    //cout<<"Array: ";
     cout<<"\nSorted Array => ";
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

         //int arr[n];
 cout<<"Enter the elements In the Array :";
  getArray(arr,arrSize);
  BubbleSort(arr,arrSize);
 // printall(arr,arrSize);

        printArray(arr,arrSize);
        int value;
        cout<<"\nEnter a value to search: ";
        cin>>value;
        int index = binarySearch(arr,arrSize, value);
        if (index==-1){
           cout<<"\nNot Found"<<endl;
        }
        else
        { cout<<"\nPosition: "<<index<< endl;

        }
    }
}
