/*
    Program: Find the Minimum Value in an Array
    Description:
        - Takes the size of an array from the user.
        - Accepts integer values into the array.
        - Finds and displays the minimum value among the entered elements.
*/

#include<iostream>
using namespace std;

int main()
{
    int user, newval;
    cout << "Enter the array size : ";
    cin >> user;
    cout << endl;

    int box[user];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < user; i++)
    {
        cout << "Array value [" << i << "] = ";
        cin >> box[i];

        if (i == 0)  
        {
            newval = box[i];
        }
        else if (box[i] < newval)
        {
            newval = box[i];
        }
    }

    cout << "---------------------------------------" << endl;
    cout << "Minimum value is : " << newval << endl;
}
