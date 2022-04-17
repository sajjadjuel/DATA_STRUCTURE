#include<iostream>
using namespace std;

void heapify(int arr[],int  n,int i)
{
  //int arr[n];
 int largest ;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void MaxHeap(int arr[],int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

void Insert(int arr[], int n)
{
    cout<<"Enter The Values : ";
    for(int i=0;i<n;i++)
           cin>>arr[i];

       MaxHeap(arr,n);
}
void Display(int arr[], int n)
{
	 for (int i = n-1; i >= 0; --i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
	int n;

	cout<<"Enter The size of the Array: ";
	cin>>n;
    int arr[n];
    Insert(arr,n);
	cout << "Sorted array is \n";
	Display(arr, n);
}




