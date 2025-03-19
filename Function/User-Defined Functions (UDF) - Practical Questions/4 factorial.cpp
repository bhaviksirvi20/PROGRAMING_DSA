#include<iostream>
using namespace std;

int bhavik(int p){
    if(p <= 1){
        return 1;
    }
    else{
        return p*bhavik(p - 1);
    }
} 
int main()
{
    int user;
    cout << "Enter The Number : " ;
    cin >> user;
    
    cout << "--------------------------" << endl;
    cout << "factorial is : " << bhavik(user) ;

}