#include <iostream>
using namespace std;

int main (){

    int start = 1 , user;
    cout << "enter the number : ";
    cin >> user ;
    do
    {
        if (start%2 == 0)
        {
            cout << start << " " ;
        }
        start++;
    } while (start <= user);
    
}