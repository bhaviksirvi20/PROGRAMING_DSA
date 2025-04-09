#include<iostream>
using namespace std;

template <typename T1 , typename T2>
T2 Bhavik ( T1 a , T2 b){
    cout << a + b ;
    return 0 ;
}

int main()
{
    Bhavik( 5.5 , 10);
}