#include <iostream>
using namespace std;
int main(){
    int user;
    float a,b,c,d;

    cout << "entewr the unit : " ;
    cin >> user ;

    if(user <= 50){
        a = user * 0.50 ;
        cout << a << endl;
    }
    else if (user <= 150){
        b = (50 * 0.50) + ((user - 50) * 0.75);
        cout << b << endl;
    }
    else if (user <= 300){
        c = (50 * 0.50) + (100 * 0.75) + ((user - 150) * 1.20);
        cout << c << endl;
    }
    else{
        d = (50 * 0.50) + (100 * 0.75) + (150 * 1.20) + ((user - 300) * 1.50);
        cout << d << endl;
    }

    int sum ;
    sum = a + b + c + d;
    cout << sum << endl;

    int ave ;
    ave = ((a + b + c + d) * 20) / 100;
    cout << ave << endl;

    int total ;
    total = sum + ave ;
    cout << total << endl;
}