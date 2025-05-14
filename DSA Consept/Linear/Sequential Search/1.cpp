#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout << "Enter The Array Size : " ;
    cin >> size;
    cout << "-----------------------------" << endl;
    int array[size];
    int key = 23;
    cout << "Key is : " << key << endl;
    cout << "-----------------------------" << endl;
    
    for(int i = 0 ; i < size ; i++){
        cout << "Box [" << i << "] : " ;
        cin >> array[i] ;
    }
    cout << "-----------------------------" << endl;
    for(int i = 0 ; i < size ; i++){
        cout << array[i] << " ";
    }
    cout << endl << "-----------------------------" << endl;
    
    for(int i = 0 ; i < size ; i++){
        for(int j = i ; j < size ; j++){
            if(array[i] == key){
                cout << "-----------------------------" << endl;
                cout << "| Successfuly..." << endl;
                cout << "| key index no. is : " << j << endl;
                break;
            }
            else{
                cout << "Invalid key !" << endl;
                break;
            }
        }
    }
    cout << "-----------------------------" << endl;
}