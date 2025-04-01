#include<iostream>
using namespace std;

void Bhavik(int table)
{
    for (int i = 1; i <= 10 ; i++)
    {
        cout << table << " X " << i << " = " << table * i << endl;
    }
    cout << "--------------" << endl;
}
int main()
{
    int user;
    cout << "Enter The Table Number : " ;
    cin >> user;
    cout << "============================" << endl;

    for (int table = 1; table <= user; table++)
    {
        Bhavik(table);   
    }
    
}