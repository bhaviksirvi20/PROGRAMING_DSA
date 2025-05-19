/*
Matrix ka input lo, usko print karo, 
phir user se koi value pucho (temp),
aur us value ki matrix me position(s) dhoondo aur print karo.
*/

#include <iostream>
using namespace std;

int main()
{
    int rowsize, colsize, temp;
    cout << "Enter the size of rowsize Array : ";
    cin >> rowsize;
    cout << "Enter the size of colsize Array : ";
    cin >> colsize;
    cout << "---------------------------------------" << endl;

    int box[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "box [" << i << "][" << j << "] = ";
            cin >> box[i][j];
        }
    }

    cout << "---------------------------------------" << endl;

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

    cout << "---------------------------------------" << endl;

    cout << "Enter the size of Array Position : ";
    cin >> temp;

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            if (box[i][j] == temp)
            {
                cout << "Position is [" << i << "][" << j << "]" << endl;
            }
        }
    }

    cout << "=======================================" << endl;
}
