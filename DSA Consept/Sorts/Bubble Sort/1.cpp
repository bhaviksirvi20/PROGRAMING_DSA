#include<iostream>
using namespace std;

int main() {

    int arr[5] = {50, 20, 10, 40, 30};

    cout << "------------ BUBBLE SORT ------------" << endl;

    for(int i = 0; i < 5; i++) {
        cout << "box[" << i << "] : " << arr[i] << endl;
    }

    cout << "--------------------------------------" << endl;

    cout << "Unsorted Array : ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "--------------------------------------" << endl;

    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array   : ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "--------------------------------------" << endl;

}
