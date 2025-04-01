#include <iostream>
using namespace std;

int main(){
    int p, q, r, s;

    cout << "Enter the first value: ";
    cin >> p;

    cout << "Enter the second value: ";
    cin >> q;

    cout << "Enter the third value: ";
    cin >> r;

    cout << "Enter the fourth value: ";
    cin >> s;

    if (p > q)
    {
        if (p > r)
        {
            if (p > s)
            {
                cout << "Maximum value is: First P";
            }
            else
            {
                cout << "Maximum value is: Fourth S";
            }
        }
        else
        {
            if (r > s)
            {
                cout << "Maximum value is: Third R";
            }
            else
            {
                cout << "Maximum value is: Fourth S";
            }
        }
    }
    else
    {
        if (q > r)
        {
            if (q > s)
            {
                cout << "Maximum value is: Second Q";
            }
            else
            {
                cout << "Maximum value is: Fourth S";
            }
        }
        else
        {
            if (r > s)
            {
                cout << "Maximum value is: Third R";
            }
            else
            {
                cout << "Maximum value is: Fourth S";
            }
        }
    }

}
