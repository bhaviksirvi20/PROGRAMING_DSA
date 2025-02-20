#include<iostream>
using namespace std;

int main (){

    int Maths , English , Science ;

    cout << "Enter Maths Marks : ";
    cin >> Maths ;
    
    cout << "Enter English Marks : ";
    cin >> English ;

    cout << "Enter Science Marks : ";
    cin >> Science ;

    int total = Maths + English + Science ;
    cout << "Total Marks : " << total << endl;

    float pr = total / 3.0 ;
    cout << "PR % : " << pr << endl;

}