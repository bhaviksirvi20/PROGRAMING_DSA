#include <iostream>
using namespace std;

int main()
{
    int size, max = 0;
    cout << "Enter The Rowsize & Colsize Array : ";
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
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if ( max < box[i][j])
            {
                max = box[i][j];
            }
        }
    }
    cout << "Largest value is = " << max << endl;
    cout << "==================================" << endl;
}
