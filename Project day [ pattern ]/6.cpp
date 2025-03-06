#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int space = 5; space > i; space--)
        {
            cout << "-" << " ";
        }
        for (int space = 5; space > i; space--)
        {
            cout << "-" << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

// output :
// 1 - - - - - - - - 1
// 1 2 - - - - - - 2 1
// 1 2 3 - - - - 3 2 1
// 1 2 3 4 - - 4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
