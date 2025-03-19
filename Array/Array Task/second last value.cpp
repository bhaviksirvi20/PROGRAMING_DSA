#include <iostream>
using namespace std;

int main()
{
    int user, temp;
    cout << "Enter the array size : ";
    cin >> user;
    cout << "------------------------------------------" << endl;

    int box[user];
    for (int i = 0; i < user; i++)
    {
        cout << "Array value [" << i << "] = ";
        cin >> box[i];
    }
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < user; i++)
    {
        for (int j = 0; j < user; j++)
        {
            if (box[j] > box[j + 1])
            {
                temp = box[j];
                box[j] = box[j + 1] ;
                box[j + 1] = temp;
            }
        }
    }
    cout << "Second Largest Value : " << box[user - 2] << endl;
}
