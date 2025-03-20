#include<iostream>
using namespace std;

void rev(string a){

    int count = 0;
    for (int i = 0; i < a[i]; i++)
    {
        cout << a[i] ;
        count++;
    }
    cout << endl;
    for (int i = 0; i < count; i++)
    {
        cout << a[count - 1 - i] ;
    
    }
    cout << endl;
    cout << "===========================" << endl;
}
int main()
{
    string user;
    cout << "Enter the Word : " ;
    cin >> user;
    cout << "===========================" << endl;
    
    rev(user);
}