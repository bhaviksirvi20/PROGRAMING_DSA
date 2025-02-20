#include <iostream>
using namespace std;

int main(){
    int p, q, r, s, t, u;

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

    cout << "Enter the sixth value: ";
    cin >> u;

    if (p > q)
    {
        if (p > r)
        {
            if (p > s)
            {
                if (p > t)
                {
                    if (p > u)
                    {
                        cout << "Maximum value is: First P";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
            }
            else
            {
                if (s > t)
                {
                    if (s > u)
                    {
                        cout << "Maximum value is: Fourth S ";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
            }
        }
        else
        {
            if (r > s)
            {
                if (r > t)
                {
                    if (r > u)
                    {
                        cout << "Maximum value is: Third R";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
            }
            else
            {
                if (s > t)
                {
                    if (s > u)
                    {
                        cout << "Maximum value is: Fourth S ";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
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
                    if (q > u)
                    {
                        cout << "Maximum value is: Second Q";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U";
                    }
                }
            }
            else
            {
                if (s > t)
                {
                    if (s > u)
                    {
                        cout << "Maximum value is: Fourth S ";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U ";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U ";
                    }
                }
            }
        }
        else
        {
            if (r > s)
            {
                if (r > t)
                {
                    if (r > u)
                    {
                        cout << "Maximum value is: Third R";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U ";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U ";
                    }
                }
            }
            else
            {
                if (s > t)
                {
                    if (s > u)
                    {
                        cout << "Maximum value is: Fourth S ";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U ";
                    }
                }
                else
                {
                    if (t > u)
                    {
                        cout << "Maximum value is: Fifth T";
                    }
                    else
                    {
                        cout << "Maximum value is: Sixth U ";
                    }
                }
            }
        }
    }
}
