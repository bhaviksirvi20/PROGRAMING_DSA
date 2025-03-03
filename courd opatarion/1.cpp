#include <iostream>
using namespace std;

int main()
{
    int user, size = 0;
    int box[size];

    size++;
    do
    {
        cout << "☺ Curd Oparation " << endl;
        cout << "1. Create " << endl;
        cout << "2. Read " << endl;
        cout << "3. Update " << endl;
        cout << "4. Delete " << endl;
        cout << "5. Exit " << endl;

        cout << "--------------------------" << endl;
        cout << "Enter Your number : ";
        cin >> user;

        switch (user)
        {
        case 1:

            for (int i = 0; i < size; i++)
            {
                cout << "Enter the Array : ";
                cin >> size;
            }

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;

        default:
            cout << "Exit !" << endl;
            break;
        }

    } while (user != 0);
}