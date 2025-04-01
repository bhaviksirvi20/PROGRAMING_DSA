#include <iostream>
using namespace std;

void bhavik(const int &x)
{
    x = x + 20 ;
}
int main()
{
    int a = 10;
    cout << "Before, A : " << a << endl;
    bhavik(a);
    cout << "After, A : " << a << endl;
}
