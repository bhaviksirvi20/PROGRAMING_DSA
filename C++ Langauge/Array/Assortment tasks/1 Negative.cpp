#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter The Size Of Array : ";
    cin >> size;
    cout << "--------------------------------------------" << endl;
    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] : ";
        cin >> box[i];
    }
    cout << "--------------------------------------------" << endl;
    cout << "Nagetive Value is : ";
    for (int i = 0; i < size; i++)
    {
        if (box[i] < 0)
        {
            cout << box[i] << " ";
        }
    }
}