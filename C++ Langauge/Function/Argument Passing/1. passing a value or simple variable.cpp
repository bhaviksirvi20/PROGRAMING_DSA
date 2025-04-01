#include <iostream>
using namespace std;

void addition (int a , int b)
{
    cout << "Addition is (+) : " << a + b << endl;
    cout << "============================" << endl;
}

int main ()
{
    int x , y ;
    cout << "Enter The First Value : " ;
    cin >> x;
    cout << "Enter The Second Value : " ;
    cin >> y;
    cout << "============================" << endl;
    
    addition(x , y);
}