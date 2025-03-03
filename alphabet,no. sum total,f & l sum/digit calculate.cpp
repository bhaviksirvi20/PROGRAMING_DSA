#include <iostream>
using namespace std;

int main()
{
    int user, count = 0;

    cout << "Enter a userber: ";
    cin >> user;

    while (user != 0)
    {
        user /= 10;
        count++;
    }
    cout << "Total Digits : " << count << endl;
}
