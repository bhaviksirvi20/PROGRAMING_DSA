#include<iostream>
using namespace std;

template <typename T1 , typename T2>
class Bhavik{
    public:
    T1 first;
    T2 second;

};

int main()
{
    Bhavik <int , float> a1 ;
    a1.first = 10;
    a1.second = 5.5f;
    
    cout << "First: " << a1.first << endl;
    cout << "Second: " << a1.second << endl;
}