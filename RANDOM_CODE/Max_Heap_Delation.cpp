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

void Insertion(int arr[], int n)
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
void Delete(int arr[], int& n, int i)
{
    swap(arr[i], arr[n-1]);
    n = n - 1;
   // heapify(arr, n, i);
   MaxHeap(arr,n);
    cout << "\nMAX HEAP TREE AFTER DELATION::=> ";
    Display(arr, n);
}

int main()
{
	int n,t;
    int d;
	cout<<"Enter The size of the Array: ";
	cin>>n;
    int arr[n];
    Insertion(arr,n);
    MaxHeap(arr,n);
	cout << "\nMAX HEAP TREE ::=> ";
	Display(arr, n);
    cout<<"\nWhich Value you want to delete? : ";
	cin>>d;
	for (int i=0; i<n;i++)
    {
        if(arr[i]==d)
        {
            t=1;
            Delete(arr,n,i);
            break;
        }
    }
    if(t!=1)
        cout<<"\nData Not Found"<<endl;
	getch();
}






