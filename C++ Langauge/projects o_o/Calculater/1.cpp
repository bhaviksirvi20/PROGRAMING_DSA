#include <iostream>
using namespace std;

int Addition(int a, int b)
{
    return a + b;
}
int Subtraction(int a, int b)
{
    return a - b;
}
int Multiplication(int a, int b)
{
    return a * b;
}
int Division(int a, int b)
{
    return a / b;
}
int Mode(int a, int b)
{
    return a % b;
}
int main()
{
    int user;
    int first;
    int second;

    do
    {
        cout << endl;
        cout << "================= Arithmetic Operations ==================" << endl << endl;
        cout << "Press 1 for : +" << endl;
        cout << "Press 2 for : -" << endl;
        cout << "Press 3 for : *" << endl;
        cout << "Press 4 for : /" << endl;
        cout << "Press 5 for : %" << endl;
        cout << "Press 0 for the exit" << endl;
        cout << endl;

        cout << "Enter Your Choise : ";
        cin >> user;

        if( user > 0 && user <= 5){
            cout << "Enter the first number : ";
            cin >> first;

            cout << "Enter the second number : ";
            cin >> second;
        }
        switch (user)
        {
        case 1:
            
            cout << "Addition of " << first << " + " << second << " = " << Addition(first, second);
            cout << endl;
            
            break;
        case 2:
            
            cout << "Addition of " << first << " - " << second << " = " << Subtraction(first, second);
            cout << endl;
           
            break;
        case 3:
            
            cout << "Addition of " << first << " * " << second << " = " << Multiplication(first, second);
            cout << endl;
            
            break;
        case 4:
            
            cout << "Addition of " << first << " / " << second << " = " << Division(first, second);
            cout << endl;
          
            break;
            
        case 5:
           
            cout << "Addition of " << first << " % " << second << " = " << Mode(first, second);
            cout << endl;
         
            break;

        case 0:
            cout << "Your Code is Exit..." << endl;
        
        default:
         cout << "Ples choise no (1 to 5)" << endl;
   
            break;
        }
    } while (user != 0);
}