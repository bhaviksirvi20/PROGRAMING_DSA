#include <iostream>
using namespace std;

int main(){
    int p, q, r, s, t;

    cout << "Enter the first value: ";
    cin >> p;

    cout << "Enter the second value: ";
    cin >> q;

    cout << "Enter the third value: ";
    cin >> r;

    cout << "Enter the fourth value: ";
    cin >> s;

    cout << "Enter the fifth value: ";
    cin >> t;

    if (p > q)
    {
        if (p > r)
        {
            if (p > s)
            {
                if (p > t)
                {
                    cout << "Maximum value is: First P";
                }
                else
                {
                    cout << "Maximum value is: Fifth T ";
                }
            }
            else
            {
                if (s > t)
                {
                    cout << "Maximum value is: Fourth S ";
                }
                else
                {
                    cout << "Maximum value is: Fifth T";
                }
            }
        }
        else
        {
            if (r > s)
            {
                if (r > t)
                {
                    cout << "Maximum value is: Third R";
                }
                else
                {
                    cout << "Maximum value is: Fifth T";
                }
            }
            else
            {
                if (s > t)
                {
                    cout << "Maximum value is: Fourth S ";
                }
                else
                {
                    cout << "Maximum value is: Fifth T ";
                }
            }
        }
    }
    else
    {
        if (q > r)
        {
            if (q > s)
            {
                if (q > t)
                {
                    cout << "Maximum value is: Second Q ";
                }
                else
                {
                    cout << "Maximum value is: Fifth T";
                }
            }
            else
            {
                if (s > t)
                {
                    cout << "Maximum value is: Fourth S ";
                }
                else
                {
                    cout << "Maximum value is: Fifth T";
                }
            }
        }
        else
        {
            if (r > s)
            {
                if (r > t)
                {
                    cout << "Maximum value is: Third R ";
                }
                else
                {
                    cout << "Maximum value is: Fifth T ";
                }
            }
            else
            {
                if (s > t)
                {
                    cout << "Maximum value is: Fourth S ";
                }
                else
                {
                    cout << "Maximum value is: Fifth T ";
                }
            }
        }
    }
}
