#include<iostream>
#include<conio.h>
using namespace std;

void heapify(int arr[],int  n,int i)
{

 int largest = i;
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
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}

void Insert(int arr[], int n)
{
    cout<<"Enter The Values : ";
    for(int i=0;i<n;i++)
           cin>>arr[i];
}

void Display(int arr[], int n)
{
	 for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
	int n;

	cout<<"Enter The size of the Array: ";
	cin>>n;

    int arr[n];
    Insert(arr,n);
    MaxHeap(arr,n);
	cout << "\nMAX HEAP TREE ::=> ";
	Display(arr, n);
	getch();
}





