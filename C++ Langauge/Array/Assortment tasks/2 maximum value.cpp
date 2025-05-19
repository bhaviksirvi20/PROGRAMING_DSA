/*
    Program: Find Maximum Value in a 2D Array
    Description:
        - Takes row size and column size from the user.
        - Accepts elements for a 2D array.
        - Displays the original 2D array.
        - Finds and prints the maximum value present in the entire 2D array.
*/

#include <iostream>
using namespace std;

int main()
{
    int rowsize, colsize, max = 0;
    cout << "Enter the size of rowsize Array : ";
    cin >> rowsize;
    cout << "Enter the size of colsize Array : ";
    cin >> colsize;
    cout << "----------------------------------" << endl;
    int box[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "box [" << i << "][" << j << "] = ";
            cin >> box[i][j];
        }
    }

    cout << "----------------------------------" << endl;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

    cout << "----------------------------------" << endl;
    for (int j = 0; j < colsize; j++)
    {
        for (int i = 0; i < rowsize; i++)
        {
            if ( max < box[i][j])
            {
                max = box[i][j];
            }
        }
    }
    cout << "Maximum value is = " << max << endl;
    cout << "==================================" << endl;
}
