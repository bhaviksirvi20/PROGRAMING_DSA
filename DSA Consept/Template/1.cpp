#include<iostream>
using namespace std;

template <typename T>
T Bhavik ( T a ,T b){
    cout << a + b;
    return 0 ;
}

int main()
{
    Bhavik(10 , 20);
}