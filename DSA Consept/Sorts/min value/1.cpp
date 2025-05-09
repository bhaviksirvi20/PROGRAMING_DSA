#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout << "Enter The Array : " ;
    cin >> size;
    int arr[size];
    
    for(int i = 0 ; i < size ; i++)
    {
        cout << "box[" << i << "] : " ;
        cin >> arr[i];
    }
    cout << "------------------------------" << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "------------------------------" << endl;
    int temp = arr[0];
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] < temp)
        {
            temp = arr[i] ;
        }
    }
    cout << "Minimum value : " << temp << " " << endl;
    
}