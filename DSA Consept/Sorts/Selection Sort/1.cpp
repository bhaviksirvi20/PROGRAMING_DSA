#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter The Array Size : ";
    cin >> size;
    int arr[size];
    int temp;

    cout << "-------- INSERTION SORT ---------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i << "] : ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {

        int minindex = i;

        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

    cout << "--------------------------------" << endl;
    cout << "Sorted Array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i << "] : " << arr[i] << endl;
    }
    cout << "--------------------------------" << endl;
}
