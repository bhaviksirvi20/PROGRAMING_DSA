#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter The Size Of Array : ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i << "] : ";
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "-----------------------" << endl;
    cout << "Sorted Array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "-----------------------" << endl;

    int search;
    cout << "Enter The Search Key : ";
    cin >> search;

    int left, mid, right;
    left = 0;
    right = size - 1;
    mid = (0 + size - 1) / 2;

    for (int i = 0; i < size; i++)
    {

        if (search < arr[mid])
        {                          // 3
            right = mid;           // 5 = 3
            mid = (0 + right) / 2; // 3 = (1 + 5) / 2 = 3
            arr[mid] = search;
        }

        if (search > arr[mid])
        {
            mid = (left + right) / 2; // 3 = (1 + 4) / 2 = 2.5
            arr[mid] = search;
        }

        if (search == arr[mid])
        {
            cout << "Target Value : " << search;
            break;
        }
    }
    cout << endl << "------------------------" << endl;
}