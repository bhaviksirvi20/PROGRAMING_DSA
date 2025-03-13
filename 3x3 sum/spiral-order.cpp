#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of row & col : ";
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
    cout << "==================================" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 && j != 3)
            {
                cout << box[i][j] << " ";
            }
            
        }
        cout << endl;
    }
    
}