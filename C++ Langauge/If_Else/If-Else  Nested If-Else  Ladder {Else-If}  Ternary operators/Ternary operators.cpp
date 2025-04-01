#include <iostream>
using namespace std;

int main() {
    int p, q;
    cout << "Enter first value: ";
    cin >> p;
    cout << "Enter second value: ";
    cin >> q;

    (p > q) ? cout << "Maximum value is: " << p : (p < q) ? 
    cout << "Maximum value is: " << q : cout << "Both values are equal.";

}
