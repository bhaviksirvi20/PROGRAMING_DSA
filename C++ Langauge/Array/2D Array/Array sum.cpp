/*
Matrix ke elements input lo, print karo, aur unka total sum nikal kar display karo.
*/

#include <iostream>
using namespace std;

int main()
{
    int rowsize, colsize ,sum = 0;
    cout << "Enter the rowsize : ";
    cin >> rowsize;
    cout << "Enter the colsize : ";
    cin >> colsize;

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << "Box [" << row << "][" << col << "] = " ;
            cin >> box[row][col] ;
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << box[row][col] << " ";
            sum += box[row][col];
        }
        cout << endl ;
    }
    cout << "sum : " << sum;
}
