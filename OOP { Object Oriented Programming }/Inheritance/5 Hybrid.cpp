#include <iostream>
using namespace std;
class A
{
public:
    void set()
    {
        cout << "a" << endl;
    }
};
class B : public A
{
public:
    void get()
    {
        cout << "b" << endl;
    }
};
class C: public A
{
public:
    void pop()
    {
        cout << "b" << endl;
    }
};
class D: public C , public B
{
public:
    void push()
    {
        cout << "b" << endl;
    }
};
int main()
{
    D obj1;

    obj1.B::set();
    obj1.C::set();
    
}