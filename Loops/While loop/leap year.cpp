#include <iostream>
using namespace std;

int main (){

    int start , end;
    cout << "enter the first value : " ;
    cin >> start ;
    cout << "enter the last value : " ;
    cin >> end ;

    while (start <= end)
    {
        cout << start << " ";
        start += 4;
    }
    
}