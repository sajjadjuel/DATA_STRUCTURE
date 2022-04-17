#include <iostream>
using namespace std;

int main()
{
    int r=3, d=3, a[3][3], b[3][3],c[3][3], sum[3][3], i, j;

   /* cout << "Enter number of rows : ";
    cin >> r;

    cout << "Enter number of columns : ";
    cin >> d;*/

 cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < d; ++j)
       {
          // cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];


       }


 cout << endl << "Enter elements of 2nd matrix: " << endl;
 for(i = 0; i < r; ++i)
       for(j = 0; j < d; ++j)
       {
        //   cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
 cout << endl << "Enter elements of 3rd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < d; ++j)
       {

           cin >> c[i][j];
       }

    for(i = 0; i < r; i++)
        for(j = 0; j < d; j++)
            sum[i][j] = a[i][j] + b[i][j]+ c[i][j];

    cout << endl << "Addition of 3 matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < d; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == d - 1)
                cout << endl;
        }

    return 0;
}

