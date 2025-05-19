/*
    Program: Sort an array and remove duplicate elements
    Description:
        - Takes input of an array from the user.
        - Sorts the array in ascending order using Bubble Sort.
        - Displays the sorted array.
        - Then removes and displays duplicate-free elements.
*/

#include <iostream>
using namespace std;

int main()
{
    int size, temp = 0;

    cout << "Enter Array Size: ";
    cin >> size;
    cout << "---------------------------------" << endl;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (box[j] > box[j + 1])
            {
                temp = box[j];
                box[j] = box[j + 1];
                box[j + 1] = temp;
            }
        }
    }

    cout << "---------------------------------" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;

    cout << "========================" << endl;

    cout << "Same Value Remove: " << endl;

    for (int i = 0; i < size; i++)
    {
        if (box[i] != box[i + 1])
        {
            cout << box[i] << " ";
        }
    }

    cout << endl;
    cout << "---------------------------------" << endl;

}
