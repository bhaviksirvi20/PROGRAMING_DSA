#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the Array Size " ;
    cin >> size ;
    cout << "-----------------------" << endl;
    int arr[size];


    for (int i = 0; i < size; i++)
    {
        cout << "Box [" << i << "] : " ;
        cin >> arr[i] ;
    }
    cout << "-----------------------" << endl;
    
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        
    }
    cout << "Insertion Sort : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "-----------------------" << endl;
    
}
