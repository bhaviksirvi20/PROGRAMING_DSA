#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of Row & Col = ";
    cin >> size;

    int box[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "box[" << i << "]" << "[" << j << "] = ";
            cin >> box[i][j];
        }
    }
    cout << "-------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (box[i][j] > 0 && box[i][j] <= 9)
            {
                cout << box[i][j] << "  ";
            }
            else
            {
                cout << box[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << "-------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 && j != 3)
            {
                cout << box[i][j] << " ";
            }
            if (j == 3 && i != 3)
            {
                cout << box[i][j] << " ";
            }
            if (i == 3)
            {
                cout << box[i][size - 1 - j] << " ";
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == 0 && i != 0 && i != 3 && i != 2)
            {
                cout << box[size - 1 - i][j] << " ";
            }
            if (i == 1 && j >= 0 && j <= 2)
            {
                cout << box[i][j] << " ";
            }
            if (i == 2 && j != 0 && j != 3)
            {
                cout << box[i][size - 1 - j] << " ";
            }
        }
    }
}