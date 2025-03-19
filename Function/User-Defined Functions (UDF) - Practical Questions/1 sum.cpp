#include <iostream>
using namespace std;

int bhavik(int m,int n)
{
    return m + n ;
   
}
int main()
{
    int a,b;
    cout << "enter first value : " ;
    cin >> a;
    cout << "enter second value : " ;
    cin >> b;

    cout << "--------------------------" << endl;
    cout << "sum : " << bhavik(a,b);
}