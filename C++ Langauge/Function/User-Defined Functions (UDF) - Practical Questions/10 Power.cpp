#include<iostream>
using namespace std;

int bhavik(int p,int q){
    if(q == 0){ 
        return 1;
    }
    else{
        return p*bhavik(p , q - 1); 
    }
}
int main()
{
    int user1 , user2;
    cout << "Enter Base : " ; 
    cin >> user1;
    cout << "Enter Exponent : " ;
    cin >> user2;
    
    cout << "--------------------------" << endl;
    cout << user1 << "^" << user2 << " = " << bhavik(user1,user2) ;

}