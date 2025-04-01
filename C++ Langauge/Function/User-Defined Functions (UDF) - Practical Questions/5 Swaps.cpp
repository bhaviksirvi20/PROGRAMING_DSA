#include <iostream>
using namespace std;

int bhavik(int a,int b)
{
    int temp;
    temp = a;
    a = b ;
    b = temp ;
    
    cout << "enter first value : " << a << endl;
    cout << "enter second value : " << b << endl;

    return 0;
    
}
int main()
{
    int a,b,temp;
    cout << "enter first value : " ;
    cin >> a;
    cout << "enter second value : " ;
    cin >> b;

    cout << "--------------------------" << endl;
    bhavik(a,b);
}