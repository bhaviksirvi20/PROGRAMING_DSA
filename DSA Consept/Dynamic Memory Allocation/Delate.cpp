#include<iostream>
using namespace std;

int main()
{

    int *p = new int(20);

    delete p;
    p = NULL ;
    cout << p << endl;

}