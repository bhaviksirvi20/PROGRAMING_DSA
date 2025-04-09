#include<iostream>
using namespace std;

int main()
{
    
    int a = 10;

    int *p = new int;
    *p = 20;
    
    // or
    
    int *p = new int();
    *p = 20;
    
    // or
    
    int *p = new int(20);
    
    cout << *p << endl;
    cout << p << endl;
    
}