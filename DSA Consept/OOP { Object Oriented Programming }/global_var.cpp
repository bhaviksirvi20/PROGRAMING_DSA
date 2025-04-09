#include<iostream>
using namespace std;

int global = 100;
int main()
{
    int global = 200 ;

    cout << ::global << endl;
    cout << global << endl;
}