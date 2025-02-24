#include <iostream>
using namespace std;

int main() {
    int p, q;
    cout << "Enter the first value: ";
    cin >> p;
    cout << "Enter the second value: ";
    cin >> q;

    if (p > q)  
        cout << "Maximum value is: " << p << endl;
    else  
        cout << "Maximum value is: " << q << endl;
}
