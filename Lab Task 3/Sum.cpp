#include <iostream>
using namespace std;

int main()
{
    int r=4, d=5, a[r][d], sum=0, i, j;

 cout << endl << "Matrix_1: " << endl;
    for(i = 0; i < r; ++i)
    {
         for(j = 0; j < d; ++j)
       {
           cin >> a[i][j];


       }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < d; j++)
      {
          if (i == 0 || j == 0 || i == r - 1 || j == d - 1)
          {
               sum+=a[i][j];
          }

      }
    }

cout<<"\nSummation is: "<<sum;
cout<<endl;

    return 0;
}


