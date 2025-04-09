#include<iostream>
using namespace std;

class A{
    public:
    void push(int a,int b){
        cout << a + b << endl;
    }
    void push(float a,float b){
        cout << a + b << endl;
    }
};
int main()
{

    A obj1;
    obj1.push(5 , 10);
    obj1.push(50.10f , 10.50f);
}