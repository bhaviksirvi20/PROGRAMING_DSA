#include <iostream>
using namespace std;

int main()
{
    int user, ld, temp, sum;

    cout << "Enter the Value : ";
    cin >> user;

    ld = user % 10;
    cout << "First : " << ld << endl;
       
    while (user >= 10)
    {
        user = user / 10;
        temp = user % 10;
    }

    cout << "Last : " << user << endl;

    sum = temp + ld;
    cout << "total sum : " << sum << endl;
}