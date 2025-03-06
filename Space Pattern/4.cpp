#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int space = i ; space >= 2 ; space--){
            cout << "-" << " " ;
        }
        for (int j = i; j <= 5; j++)
        {
            if(j%2 == 0){
                cout << "0" << " " ;
            }
            else{
                cout << "1" << " ";
            }
        }
        cout << endl;
    }

}


// Output :
// 1 0 1 0 1 
// - 0 1 0 1 
// - - 1 0 1 
// - - - 0 1 
// - - - - 1 

