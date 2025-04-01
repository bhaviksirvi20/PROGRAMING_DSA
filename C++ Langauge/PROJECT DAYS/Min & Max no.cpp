#include<iostream>
using namespace std;
int main(){

    int a , b;

    cout << "Enter First No. : ";
    cin >> a;

    cout << "Enter Second No. : ";
    cin >> b;

    if(a > b){
        cout << "Min No. : " << b << endl;
        // cout << "Max No. : " << a << endl;
    }
    else{
        cout << "Min No. : " << a << endl;
        // cout << "Max No. : " << b << endl;
    }
}