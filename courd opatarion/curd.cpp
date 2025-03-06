#include<iostream>
using namespace std;

int main()
{
    int user,i;
    int size = 0;
    int box[size];
    

    do
    {
        cout << "-----------------------------" << endl;
        cout << "1. Create " << endl;
        cout << "2. Read " << endl;
        cout << "3. Updata " << endl;
        cout << "4. Delete " << endl;
        cout << "0. Exit " << endl;
        cout << "-----------------------------" << endl;
        cout << "Enter The Option : " ;
        cin >> user;
        
        switch (user)
        {
        case 1:
            cout << "Enter The Array Size : " ;
            cin >> size;
            size++;
     
            // for (i = 0; i < size ; i++)
            // {
            //     cout << "Enter the size : ";
            //     cin >> box[i];
            //     box[i] = box[size];
            // }
          
            break;
        case 2:
            cout << box[i];
          
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 0:
            cout << "Exit..." << e  ndl ;
            break;
        
        default:
            cout << "Invalid Choise ! plese Enter the no. of (1 to 4)"  << endl;
            break;
        }
    } while (user != 0);
    
}