#include<iostream>
using namespace std;

int main()
{
    int size ;
    cout << "Enter the Rowsize & Colsize Array : " ;
    cin >> size;
    cout << "----------------------------------" << endl;
    int box[size][size] ;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "box [" << i << "][" << j << "] = " ;
            cin >> box[i][j];
        }
    }
    
    cout << "----------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << box[i][j] << " " ;
        }
    cout << endl ;
    }
    
     cout << "----------------------------------" << endl;
     cout << "Transpose value : " << endl;
        for (int i = 0; i < size; i++)
        {
     for (int j = 0; j < size; j++)
    {
            cout << box[j][i] << " ";
        }
        cout << endl;
    }
      cout << "==================================" << endl;
    
}   
