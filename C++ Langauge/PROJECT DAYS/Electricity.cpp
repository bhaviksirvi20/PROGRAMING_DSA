#include <iostream>
using namespace std;
int main(){

    int user;
    float a, b, c , d , Average , sum , total;

    cout << "enter your units = ";
    cin >> user ;

    if (user <= 50) // 50 = 50
    {
        a = user * 0.50 ;
        cout << a << endl ;        
    }
    else if (user <= 150) // 50 + 100 = 150
    {
        b = (50 * 0.50) + ((user - 50) * 0.75);
        cout << b << endl ;
    }
    else if (user <= 300) // 50 + 100 + 150 = 300
    {
        c = (50 * 0.50) + (100 * 0.75) + ((user - 150) * 1.20);
        cout << c << endl ;
    }
    else { // 50 + 100 + 150 + user  
        d = (50 * 0.50) + (100 * 0.75) + (150 * 1.20) + ((user - 300) * 1.50);
        cout << d << endl;
    }
    
    sum = a + b + c + d ;
    cout << "sum :" << sum << endl ;

    Average = ((a + b + c + d) * 20 ) / 100;
    cout << "Average : " << Average << endl;

    total = sum + Average ; 
    cout << "total : " << total << endl ;
   
} 