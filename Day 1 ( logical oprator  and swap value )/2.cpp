// swap value
#include <iostream>

using namespace std;
int main()
{
    int a = 10 , b = 20 ,c;

    cout << " 1 : A = ";
    cout << a << endl;
    cout << " 2 : B = ";
    cout << b << endl;

    cout << "----------------------" << endl;

    c = a; // c = 10
    a = b; // a = 20
    b = c; // b = 10

    cout << " 1 : A = ";
    cout << a << endl;
    cout << " 2 : B = ";
    cout << b << endl;

    return 0;
}
