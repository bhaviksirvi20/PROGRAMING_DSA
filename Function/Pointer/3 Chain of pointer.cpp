#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the No. : " ;
    cin >> a;

    int *ptr1;
    ptr1 = &a;
    
    int **ptr2;
    ptr2 = &ptr1;

    cout << "------------------------------------" << endl;
    cout << "Value of ptr1 : " << *ptr1 << endl;
    cout << "Address of ptr1 : " << ptr1 << endl;
    
     cout << "------------------------------------" << endl;
    cout << "Value of ptr2 : " << **ptr2 << endl;
    cout << "Address of ptr2 : " << ptr2 << endl;
    cout << "=====================================" << endl;
}