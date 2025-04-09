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
class C : public B
{
public:
    void pop()
    {
        cout << "b" << endl;
    }
};
int main()
{
    C obj1;

    obj1.set();
    obj1.get();
    obj1.pop();
}