#include <iostream>
using namespace std;

int main(){

    int p, q, r;
    cout << "Enter the first value: ";
    cin >> p;

    cout << "Enter the second value: ";
    cin >> q;

    cout << "Enter the third value: ";
    cin >> r;

    if (p > q)
    {
        if (p > r)
        {
            cout << "Maximum value is: First P ";
        }
        else
        {
            cout << "Maximum value is: Third R ";
        }
    }
    else
    {
        if (q > r)
        {
            cout << "Maximum value is: Second Q ";
        }
        else
        {
            cout << "Maximum value is: Third R ";
        }
    }
}
