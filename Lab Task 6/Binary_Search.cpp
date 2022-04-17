#include<iostream>
#include<conio.h>
using namespace std;

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
    int i,j;
    for (i=0;i<n-1;i++)
     for (j=0;j<n-1-i;j++)
        if( arr[j] > arr[j+1] )
          {
            swap( arr, j, (j+1) );
            swapped = true;
          }
  } while(swapped);
}

void printArray(int a[], int n)
{
     cout<<"\nSorted Array => ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int binarySearch (int a[], int n, int val){
    int first = 0, last = n-1, pos = -1, mid;

    while(first<=last){

            mid = (first+last)/2;
        if(a[mid]==val)
        {
            pos=mid+1;
               return pos;
        }

        else if(a[mid]>val)
        {
            last=mid-1;

        }
        else if(a[mid]<val)
        {
            first=mid+1;

        }

    }

    return pos;
}

int main()
{
        int n;
        cout<<"\nEnter array size: ";
        cin>>n;

        int arr[n];
     cout<<"\nEnter the elements In the Array :";
     for(int i=0; i < n ; i++)
    cin >> arr[i];

      BubbleSort(arr,n);

        printArray(arr,n);
        int value;
        cout<<"\nEnter a value to search: ";
        cin>>value;
        int index = binarySearch(arr,n, value);
        if (index==-1){
           cout<<"\nNot Found"<<endl;
        }
        else
        {
            cout<<"\n *FOUND!*"<<endl;
            cout<<"\n   Position: "<<index<< endl;

        }
    getch();
}

