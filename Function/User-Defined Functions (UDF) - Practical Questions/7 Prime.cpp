#include<iostream>
using namespace std;

int prime(int a){

    int temp;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            temp++;
        }
        
    }
    if (temp <= 2)
    {
        cout << a << " is Prime number" ;
    }
    else{
        cout << a << " is Not Prime number" ;
    }
    
    return 0;

}
int main()
{
    int user;
    cout << "Enter the Value : " ;
    cin >> user;

    prime(user);
}