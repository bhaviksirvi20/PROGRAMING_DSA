// swap value
#include <iostream>
using namespace std;
int main()
{
    int a = 10 , b = 20 ;

    cout << " 1 : A = ";
    cout << a << endl;
    cout << " 2 : B = ";
    cout << b << endl;

    cout << "----------------------" << endl;
    
    a = a + b; // 10 = 10 + 20  // a = 30
    b = a - b; // 20 = 30 - 20  // b = 10
    a = a - b; // 30 = 30 - 10  // c = 20

    // cout << "----------or---------" << endl;
    // b = b - a; 
    // a = b + a; 
    
    cout << " 1 : A = ";
    cout << a << endl;
    cout << " 2 : B = ";
    cout << b << endl;
    
}
