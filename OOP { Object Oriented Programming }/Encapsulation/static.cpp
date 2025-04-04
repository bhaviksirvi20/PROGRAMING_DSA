#include <iostream>
using namespace std;

class A
{
public:
    static int X;
};

int A::X = 10;

int main()
{
    cout << A::X << endl;
}