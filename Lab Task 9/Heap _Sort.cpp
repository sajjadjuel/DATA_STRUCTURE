#include <iostream>
using namespace std;

void heapify(int arr[],int  n,int i)
{
  //int arr[size];
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < n && arr[l] > arr[largest])
		largest = l;

	if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}
void MaxHeap(int arr[],int n)
{
      for(int i=(n-1)/2;i>=0;i--)
    {
        heapify(arr,i,n);
    }
}
/*void heapSort(int arr[], int n)
{
	for (int i = n / 2; i >= 1; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i >= 1; i--)
	{
		swap(arr[1], arr[i]);

		heapify(arr, i, 1);
	}
}
/*void Insert(int arr[], int n)
{
    cout<<"Enter The Values : ";
    for(int i=0;i<n;i++)
       {
           cin>>arr[i];

       }
       MaxHeap(arr, n);
}*/
void printArray(int arr[], int n)
{
	for (int i = 0; i<n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}
int main()
{
	/*int arr[] = { NULL ,12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[1]);

	heapSort(arr, n);*/
	int n;


	cout<<"Enter The size of the Array: ";
	cin>>n;
    int arr[n];
    cout<<"Enter The Values : ";
    for(int i=0;i<n;i++)
       {
           cin>>arr[i];

       }
       MaxHeap(arr, n);
    //heapSort(arr,n);
   // Insert(arr,n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
