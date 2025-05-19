/*
Matrix ka input lo, usko print karo, aur poore matrix me se maximum value find karke print karo.
*/

#include <iostream>
using namespace std;

int main()
{
    int rowsize, colsize;
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

    int max = box[0][0]; 

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
            if (box[i][j] > max)
            {
                max = box[i][j];
            }
        }
    }
    cout << "Maximum value is = " << max << endl;
    cout << "==================================" << endl;
}
