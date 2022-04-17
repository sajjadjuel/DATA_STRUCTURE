#include<iostream>
#include<conio.h>

using namespace std;
void printElems(int *array, int size) {
    for(int i = 0; i<size; i++)
      cout << array[i] << " ";

}
void selectionSort(int *array, int size) {
    int i, min, k, swap, location;
    cout<<endl;

    for (i = 0; i < size - 1; i++) {
        min = array[i];
        location = i;

        for (k = i + 1; k < size; k++) {
            if (min > array[k]) {
                min = array[k];
                location = k;
            }
        }
        //Putting the minimum value of each pass to its correct location
        swap = array[i];
        array[i] = array[location];
        array[location] = swap;


    cout<<"Step "<<i+1<<" :";
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";

           cout<<endl;
        }



}

int main() {
    int i, num, n;

    cout << " Enter the number of integers you want to sort : ";
    cin >> n;
      int arr[n];
cout << "\nEnter elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];

    }
   selectionSort(arr, n);

    cout << "\nThe elements after applying the Selection sort: ";

    printElems(arr, n);
getch();

    return 0;
}

