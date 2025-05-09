#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {20, 30, 50, 10, 40};
    int temp = arr[0];
    
    cout << "-------- INSERTION SORT ---------" << endl;
    
    for(int i = 0 ; i < 5 ; i++){
        cout << "Box [" << i << "] : " << arr[i]  << endl;
    }
    
    cout << "--------------------------------" << endl;
    cout << "Unsorted Array : " << endl;
    
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " " ;
    }
    
    cout << endl;

    for(int i = 0 ; i < 5 ; i++){ // [20] [30] [50] [10] [40]
        for(int j = i ; j < 5 ; j++){ // 20 30 50 10 40
            if(arr[i] > arr[j]){
                temp = arr[i] ; // 0 = 20 // 1 = 20
                arr[i] = arr[j]; // 20 = 20 // 20 = 30
                arr[j] = temp; // 20 = 20 // 30 = 20
            }
        }
    }
    
    cout << "--------------------------------" << endl;
    cout << "Sorted Array : " << endl;
    
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " " ;
    }

}
