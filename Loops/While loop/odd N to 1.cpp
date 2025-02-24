#include <iostream>
using namespace std;

int main (){

    int user , end = 1;
    cout << "enter the number : ";
    cin >> user ;

    while (user >= 1)
    {
        if(user % 2 != 0){
            
            cout << user << " ";
        }
        user--;
    }
    
}