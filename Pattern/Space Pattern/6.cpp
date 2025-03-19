#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int space = 1 ; space < i ; space++){
            cout << "-" << " " ;
        }
        for (int j = 5; j >= i; j--)
        {
                cout << j << " " ;
        }
        cout << endl;
    }

}


// Output :
// 5 4 3 2 1 
// - 5 4 3 2 
// - - 5 4 3 
// - - - 5 4 
// - - - - 5  


