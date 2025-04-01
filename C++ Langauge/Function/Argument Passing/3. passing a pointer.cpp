#include <iostream>
using namespace std;

void bhavik(int *ptr)
{
    cout << "Value of a : " << *ptr << endl;
    cout << "Address of a : " << ptr << endl;
    cout << "==============================" << endl;
}
int main()
{
    int a = 10;
    int *p = &a;
    bhavik(p);
}
