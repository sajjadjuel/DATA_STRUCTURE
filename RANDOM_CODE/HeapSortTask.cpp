#include <iostream>
using namespace std;
void heapify(int arr[],int i,int n)
{    int lc,rc,li;
    lc=2*i+1;
    rc=2*i+2;

    if(lc<n && arr[lc]>arr[i])
    {
        li=lc;
    }
    else
        li=i;
    if(rc<n && arr[rc]>arr[li])
        li=rc;
    if(li!=i)
    {
        swap(arr[i],arr[li]);
        heapify(arr,li,n);
    }
}

void build_heap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,i,n);
    }
}

void heapsort(int a[],int n)
{
int i, temp;
   for (i=n/2-1; i>=0; i--)
      heapify(a, n, i);
   for (i=n-1; i>=0; i--)
   {
      swap(a[i],a[0]);
      heapify(a, 0, i);
   }
}
int main()
{
    int n;
    cout<<"Enter tree size : ";
    cin>>n;
	int a[n];
	cout<<"\nEnter tree data \n";
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    build_heap(a,n);
    cout<<"\nThe Max heap data are : ";
	for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    heapsort(a,n);
    cout<<"\nThe Heap Sorted data are : ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}
//sample input
//5 4 9 7 19 8 17 2 6 5 21
//sample output
//21 19 17 7 5 8 9 2 6 5 4
//sorted data

