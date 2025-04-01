#include <iostream>
using namespace std;

void addition (int a[])
{
       cout << "Box[1] : " << a[3] << endl;
}

int main ()
{
    int x[5] = {10,20,30,40,50};

    addition(x);
}