#include<iostream>
using namespace std;

int main()
{

    int sum = 10;
    for (int i = 1; i <= 4 ; i++)
    {
        for (int j = i; j >= 1 ; j--)
        {
        sum++;
        cout << sum << " ";
        }
        cout << endl ;
    }
    
}


// output :
// 11 
// 12 13 
// 14 15 16 
// 17 18 19 20 
