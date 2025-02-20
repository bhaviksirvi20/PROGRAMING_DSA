// Write a C++ program to input electricity unit charges and calculate total electricity bill arrording to the given condition:
// • For first 50 units Rs. 0.50/unit

// • For next 100 units Rs. 0.75/unit

// • For next 150 units Rs. 1.20/unit

// . For unit above 250 Rs. 1.50/unit

// • An additional surcharge of 20% is added to the bill

#include <iostream>

using namespace std;

int main(){

    int user;
    cout << "enter your units = ";
    cin >> user ;

    int p = 50 , q = 100 , r = 150 ;
    
    int first = user - p ;
    cout  << first << endl;
   
    float pp =  p * 0.50 ;
    cout << "first 50 unit: " << pp << endl;

    cout<< "------------------------------------" <<endl;
 
    int second = first - q ;
    cout << second << endl;
  
    float qq =  q * 0.75 ;
    cout << "Next 100 unit: " << qq << endl;

    cout<< "------------------------------------" <<endl;

    int third = second - r ;
    cout << third << endl;
 
    float rr =  r * 1.20 ;
    cout << "Next 150 unit: " << rr << endl;

    cout<< "------------------------------------" <<endl;
     
    int value = user - p - q - r ;
    cout << value << endl;

    float ss =  value * 1.50  ;
    cout << "Above 250 unit: " << ss << endl;
    
    cout<< "------------------------------------" <<endl;

    int ans = pp + qq + rr + ss ;
    cout <<"Total = " << ans << endl;

    float avg = (ans * 20 ) / 100 ;
    cout <<"Unit Average : " <<  avg << endl;

    int sum  = ans + avg ;
    cout <<"Total Amount : " << sum ;

} 
