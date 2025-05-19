/*
    Program: Print Array in Reverse Order
    Description:
        - Takes the size of an array from the user.
        - Accepts integer values into the array.
        - Prints the elements of the array in reverse order.
*/
#include<iostream>
using namespace std;

int main()
{
    int user;
    cout << "Enter the array size : ";
    cin >> user;

    int box[user];

    for (int i = 0; i < user; i++)
    {
        cout << "Array value [" << i << "] = ";
        cin >> box[i];
    }

    for (int i = 0; i < user; i++)
    {
        cout << box[user - 1 - i] << " ";
    }
    cout << endl;
    cout << "---------------------------------------" << endl;
}