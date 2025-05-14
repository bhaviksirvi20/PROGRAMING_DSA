#include <iostream>
using namespace std;

int main()
{
    cout << "-------- INSERTION SORT ---------" << endl;
    int size;
    cout << "Enter The Array Size : " ;
    cin >> size;
    int arr[size];
    
    int temp;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << "Array [" << i << "] : ";
        cin >> arr[i] ;
    }
    cout << "--------------------------------" << endl;

    for(int i = 1 ; i < size ; i++)
    {

        int key = arr[i]; // 50
        int j = i - 1; // 0
        
            while(j >= 0 && arr[j] > key) 
            {
                arr[j + 1] = arr[j];
                j--;
            }

        arr[j + 1] = key;
    }

    cout << "Sorted Array : " << endl;

    for(int i = 0 ; i < size ; i++)
    {
        cout << "Array [" << i << "] : " << arr[i] << endl ;
       
    }
    cout << "--------------------------------" << endl;
}
