#include <iostream>
using namespace std;

int bhavik(int m)
{
    if(m%2 == 0){
        cout << "Even number" << endl;
    }
    else {
        cout << "Odd Number" << endl;
        }
    return m;
   
}
int main()
{
    int a;
    cout << "Enter The Number : " ;
    cin >> a;

    cout << "--------------------------" << endl;
    bhavik(a);
}