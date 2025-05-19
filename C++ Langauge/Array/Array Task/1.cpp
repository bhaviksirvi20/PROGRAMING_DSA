// Yeh program ek 1D array ke elements ka sum nikalta hai aur unka average calculate karta hai.

#include <iostream>
using namespace std;

int main()
{
    int size;
    float average , sum = 0;
    cout << "Enter array size: ";
    cin >> size;
    cout << "---------------------------------" << endl;

    int box[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number box[" << i << "] = ";
        cin >> box[i];
        sum = sum + box[i];
    }

    average = sum / size;
    cout << "---------------------------------" << endl;
    cout << "Average of an Array: " << average << endl;
    cout << "=================================" << endl;
}
