#include<iostream>
using namespace std;

int main()
{
    int user , newval;
    cout << "Enter the array size : " ;
    cin >> user;
    cout << endl;
    
    int box[user];

    for (int i = 0; i < user; i++)
    {
        cout << "Array value [" << i << "] = ";
        cin >> box[i] ;
        if (box[i] < newval)
        {
            newval = box[i];
        }
        
    }
    cout << "---------------------------------------" << endl;
    cout << "minimum value is : " << newval ;
    
}