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
int main()
{
    B obj1;

    obj1.set();
    obj1.get();
}