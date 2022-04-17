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

void printall(int arr[], int n)
{
 for(int i =0; i < n; i++)
    cout << arr[i] << " ";
}

int main()
{
  int n;
  cout << "\nEnter number of elements: " ;
  cin>> n;

  int arr[n];
 cout<<"\nEnter the elements for sorting :";
 for(int i=0; i < n ; i++)
    cin >> arr[i];

  BubbleSort(arr,n);
  cout<<"\nSorted Array => ";
  printall(arr,n);
  getch();
  return 0;
}
