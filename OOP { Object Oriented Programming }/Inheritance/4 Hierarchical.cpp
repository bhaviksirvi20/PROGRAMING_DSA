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
class C : public A
{
public:
    void pop()
    {
        cout << "c" << endl;
    }
};
int main()
{
    B obj1;

    obj1.get();
    obj1.set();
}