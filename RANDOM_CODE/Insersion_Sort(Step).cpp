#include<iostream>
using namespace std;
int St;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;
       cout<<"Step "<<i<<" :";
      for(int i = 0; i<size; i++)
      {
            cout << array[i] << " ";
            St=i;
      }

   cout << endl<<endl;
   }
   cout<<endl;
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements : ";
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout<<endl;
   insertionSort(arr, n);
   cout<<"Total  Step Required = "<<St<<endl;
   cout << "\nArray after Sorting: ";
   display(arr, n);
}
