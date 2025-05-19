/*
Code ka purpose:
- User se rows aur columns ki size input lo.
- 2D array (matrix) ke elements input karo.
- Pure matrix ko print karo.
- Matrix ke anti-diagonal elements print karo (jaha row + column ka sum rowsize-1 ke barabar ho).
- Note: Anti-diagonal tabhi meaningful hai jab matrix square ho (rowsize == colsize).
*/

#include <iostream>
using namespace std;

int main()
{
    int rowsize, colsize;
    cout << "Enter the rowsize : ";
    cin >> rowsize;
    cout << "Enter the colsize : ";
    cin >> colsize;
    cout << "-------------------------------------" << endl;

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << "Box [" << row << "][" << col << "] = ";
            cin >> box[row][col];
        }
    }
    cout << "-------------------------------------" << endl;

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << box[row][col] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;

    cout << "Anti Diagonal : " << endl;
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (row + col == rowsize - 1)
            {
                cout << box[row][col] << " ";
            }
        }
    }
    cout << endl;
    cout << "-------------------------------------" << endl;
}
