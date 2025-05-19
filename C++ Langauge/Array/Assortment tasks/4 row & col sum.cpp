/*
    Program: Sum of a Specific Row and Column in a Square Matrix
    Description:
        - Takes the size of a square matrix from the user.
        - Accepts elements of the matrix from the user.
        - Displays the matrix.
        - Asks for a row number and calculates the sum of that row.
        - Asks for a column number and calculates the sum of that column.
*/

#include <iostream>
using namespace std;

int main()
{
    int size , sum = 0;
    cout << "Enter the size of row & col Array : ";
    cin >> size;

    cout << "----------------------------------" << endl;
    int box[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "box [" << i << "][" << j << "] = ";
            cin >> box[i][j];
        }
    }

    cout << "----------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

    cout << "----------------------------------" << endl;
    int row, rowsum = 0;
    cout << "Enter the no. of Row (0 to " << size - 1 << ") : " ;
    cin >> row;

    for (int i = 0; i < size; i++)
    {
        rowsum += box[row][i];
    }
    cout << "Sum of row " << row << " : " << rowsum << endl;

    cout << "----------------------------------" << endl;
    int col, colsum = 0;
    cout << "Enter the no. of Col (0 to " << size - 1 << ") : " ;
    cin >> col;

    for (int i = 0; i < size; i++)
    {
        colsum += box[i][col];
    }
    cout << "Sum of column " << col << " : " << colsum << endl;
    cout << "----------------------------------" << endl;
}
