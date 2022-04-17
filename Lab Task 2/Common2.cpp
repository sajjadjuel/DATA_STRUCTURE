#include <iostream>

using namespace std;

int main()
{
    int a,b;

      cout<<"Enter The number of elements for the 1st Array: ";
    cin>>a;
    int n[a];
        cout<<"Array_1 : ";
    for(int i=0; i<a; i++)
        {cin >> n[i];}
        cout<<"Enter The number of elements for the 2nd Array: ";
    cin >> b;
    int r[b];
        cout<<"Array_2 : ";
    for(int i=0; i<b; i++)
        cin >> r[i];

    int p[a+b];
    int k = 0;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            if (n[i] == r[j]){
                p[k] = n[i];
                k++;
            }
        }
    }
    if(k==0) cout << "\n\n No common element!";
    else {
        cout << "\n\n Common elements are : ";
        for (int l=0; l<k; l++){

                cout << p[l] << " ";

                }
            }


    return 0;}

