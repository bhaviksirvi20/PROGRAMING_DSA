/*
    Program: Print Negative Values from an Array
    Description:
        - Takes the size of an array from the user.
        - Accepts integer values into the array.
        - Prints all the negative values present in the array.
*/

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
    cout << "Negative Value is : ";
    for (int i = 0; i < size; i++)
    {
        if (box[i] < 0)
        {
            cout << box[i] << " ";
        }
    }
}
