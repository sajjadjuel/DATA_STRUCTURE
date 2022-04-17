#include <iostream>

using namespace std;

int main() {


    int row=3, col=3, i, j;


    int m1[10][10], m2[10][10], m3[10][10], sum[10][10];

    //cout << "\n\nEnter the number of Rows and Columns of matrix : ";
    //cin >> row >> col;

    cout << "\nEnter the " << row * col << " elements of first matrix : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "\nEnter the " << row * col << " elements of second matrix : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m2[i][j];
        }
    }
    cout << "\nEnter the " << row * col << " elements of third matrix : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m3[i][j];
        }
    }
    //calculating the sum matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = m1[i][j] + m2[i][j] + m3[i][j];
        }
    }

    cout << "\n\nThe first matrix is : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m1[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "\n\nThe second matrix is : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m2[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\nThe third matrix is : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m3[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\nThe Sum matrix is : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }

        cout << endl;
    }

    cout << "\n\n";

    return 0;
}
