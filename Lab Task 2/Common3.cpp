#include<iostream>
using namespace std;
void common_Array(int arry1[], int n1, int arry2[], int n2)
{
  int count =0;
  for(int a =0; a < n1 ; a++)
    for(int b=0; b< n2; b++)
      if(arry1[a] == arry2[b])
         count++;


   if(count == 0){
      cout << " No common element!" << endl;
      return;
    }

    int *arry3 = new int[count];
    int k=0;
    for(int a =0 ; a< n1; a++)
     for(int b = 0; b<n2; b++)
       if(arry1[a] == arry2[b])
          arry3[k++] = arry1[a];


     for(int a=0 ; a < count-1; a++)
       cout << arry3[a] <<  " ";
       cout<<endl;
}

int main()
{
    int n1;
    int n2;

    cout<<"Enter The number of elements for the 1st Array: ";
    cin>>n1;
    cout<<"Enter The number of elements for the 2nd Array: ";
    cin >> n2;
    cout<<endl;

    int arry_1[n1];
        cout<<"Array_1 : ";
    for(int i=0; i<n1; i++)
        {cin >> arry_1[i];}


  int arry_2[n2];
    cout<<"Array_2 : ";
    for(int i=0; i<n2; i++)
        cin >> arry_2[i];
cout << "\n output : ";
  common_Array(arry_1, n1, arry_2, n2);


}

