/*
Matrix ka input lo, usko print karo, phir har column ka sum calculate karke print karo.
*/

#include<iostream>
using namespace std;

int main() {
    int rowsize, colsize, sum = 0;

    cout << "Enter the size of rowsize Array: ";
    cin >> rowsize;

    cout << "Enter the size of colsize Array: ";
    cin >> colsize;

    cout << "----------------------------------" << endl;

    int box[rowsize][colsize];

    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colsize; j++) {
            cout << "box [" << i << "][" << j << "] = ";
            cin >> box[i][j];
        }
    }

    cout << "----------------------------------" << endl;

    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colsize; j++) {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

    cout << "----------------------------------" << endl;

    for (int j = 0; j < colsize; j++) {
        sum = 0; 
        for (int i = 0; i < rowsize; i++) {
            sum = sum + box[i][j];
        }
        cout << "Box [" << j << "] = " << sum << endl;
    }

    cout << "==================================" << endl;
}
