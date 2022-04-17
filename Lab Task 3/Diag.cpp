#include <iostream>
using namespace std;

int main()
{
    int r=5, d=5, a[r][d], sum=0, i, j;


 cout << "Matrix_1: " << endl;
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
          if (i == j || (i + j) == (d - 1))
          {
               sum+=a[i][j];
          }

      }
    }

cout<<"Summation is: "<<sum;

    return 0;
}


