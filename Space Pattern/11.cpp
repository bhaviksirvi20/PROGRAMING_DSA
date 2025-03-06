#include <iostream>
using namespace std;

int main()
{
    
     for (int i = 1; i <= 5; i++)
        {
        for(int space = 5 ; space > i ; space--)
        {
            cout << "-" << " " ;
        }
        for (int j = 1; j <= i; j++)
        {
                cout << "*" << " " ;
        }
        
        
        for (int j = i - 1; j >= 1; j--)
        {
                cout << "*" << " " ;
        }
       
           for(int space = 5 ; space > i ; space--)
        {
            cout << "-" << " " ;
        }
        cout << endl;
        
       
    }
}


// Output :
// - - - - * - - - - 
// - - - * * * - - - 
// - - * * * * * - - 
// - * * * * * * * - 
// * * * * * * * * * 