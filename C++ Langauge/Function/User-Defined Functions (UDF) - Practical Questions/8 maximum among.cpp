#include <iostream>
using namespace std;

int bhavik(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        cout << "Maximum value: " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "Maximum value: " << b << endl;
    }
    else
    {
        cout << "Maximum value: " << c << endl;
    }
    return 0;
}


int main()
{
    int a, b, c;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
    cout << "Enter third value: ";
    cin >> c;

    cout << "--------------------------" << endl;
    bhavik(a, b, c);
}
