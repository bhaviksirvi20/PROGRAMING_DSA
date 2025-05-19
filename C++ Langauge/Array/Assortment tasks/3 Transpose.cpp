/*
    Program: Input and Transpose of a 2D Array
    Description:
        - Takes the size of rows and columns from the user.
        - Accepts input values into a 2D array.
        - Displays the original 2D array.
        - Prints the transpose of the 2D array.
*/

#include<iostream>
using namespace std;

int main()
{
    int rowsize , colsize ;
    cout << "Enter the size of rowsize Array : " ;
    cin >> rowsize;
    cout << "Enter the size of colsize Array : " ;
    cin >> colsize;
    cout << "----------------------------------" << endl;
    int box[rowsize][colsize] ;
    
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "box [" << i << "][" << j << "] = " ;
            cin >> box[i][j];
        }
    }
    
    cout << "----------------------------------" << endl;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << box[i][j] << " " ;
        }
        cout << endl ;
    }
    
    cout << "----------------------------------" << endl;
    cout << "Transpose value : " << endl;
    for (int i = 0; i < colsize; i++)  
    {
        for (int j = 0; j < rowsize; j++)
        {
            cout << box[j][i] << " ";
        }
        cout << endl;
    }
    cout << "==================================" << endl;
}
