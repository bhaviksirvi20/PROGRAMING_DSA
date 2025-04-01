#include <iostream>
using namespace std;

void bhavik(int *ptr)
{
    cout << "Value of X : " << *ptr << endl;
    cout << "============================" << endl;
}
int main()
{
    int x ;
    cout << "Enter The First Value : " ;
    cin >> x;

    cout << "============================" << endl;
    
    bhavik(&x);
}
