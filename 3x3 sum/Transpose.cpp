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
        for (int i = 0; i < rowsize; i++)
        {
     for (int j = 0; j < colsize; j++)
    {
            cout << box[j][i] << " ";
        }
        cout << endl;
    }
      cout << "==================================" << endl;
    
}   