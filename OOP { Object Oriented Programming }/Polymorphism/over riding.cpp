#include <iostream>
using namespace std;

class A
{
public:
    void push(int a, int b)
    {
        cout << a + b << endl;
    }
};
class B : public A
{
public:
    void push(int a, int b)
    {
        cout << a + b << endl;
    }
};
int main()
{
    B obj1;
    obj1.push(5, 10);
    obj1.A::push(50, 10);
}