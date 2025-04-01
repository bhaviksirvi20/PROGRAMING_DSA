#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the No. : " ;
    cin >> a;

    int *ptr;

    ptr = &a;

    cout << "------------------------" << endl;
    cout << "Value of ptr : " << *ptr << endl;
    cout << "Address of ptr : " << ptr ;
    
}