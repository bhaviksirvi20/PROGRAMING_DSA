/*
    Program: Find the Maximum Value in an Array
    Description:
        - Takes size input from the user to create an array.
        - Accepts integer values into the array from the user.
        - Finds and displays the maximum value among the entered elements.
*/

#include<iostream>
using namespace std;

int main()
{
    int user , newval = 0;

    cout << "Enter the array size : " ;
    cin >> user;
    cout << endl;
    
    int box[user];

    for (int i = 0; i < user; i++)
    {
        cout << "Array value [" << i << "] = " ;
        cin >> box[i] ;
        if (box[i] > newval)
        {
            newval = box[i];
        }
    }

    cout << "---------------------------------------" << endl;
    cout << "maximum value is : " << newval ;
}
