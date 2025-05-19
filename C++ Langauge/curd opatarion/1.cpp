/*
    Program: Simple CRUD Operations on an Integer Array
    Description:
        - Provides a menu-driven interface to perform CRUD operations on an array.
        - Create: Add a new integer value to the array (up to 1000 elements).
        - Read: Display all current values in the array.
        - Update: Modify a value at a specific index.
        - Delete: Remove a value at a specific index and shift elements.
        - Exit: Terminate the program.
        - Validates inputs and handles edge cases like empty array and invalid indices.
*/

#include <iostream>
using namespace std;

int main() {
    int user, size = 0;
    int box[1000];

    do {
        cout << "CRUD Operation:" << endl;
        cout << "1. Create" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Exit" << endl;
        cout << "------------------------------------------------" << endl;

        cout << "Enter Your Choice: ";
        cin >> user;

        switch (user) {
            case 1: {
                int arr_val;
                if (size < 1000) {
                    cout << "Enter the value: ";
                    cin >> arr_val;
                    box[size] = arr_val;
                    size++;
                    cout << "Value successfully added! ☺" << endl;
                } else {
                    cout << "Array is full!" << endl;
                }
                cout << "------------------------------------------------" << endl;
                break;
            }
            
            case 2:
                if (size > 0) {
                    for (int i = 0; i < size; i++) {
                        cout << "box[" << i << "] = " << box[i] << endl;
                    }
                } else {
                    cout << "Please add values using option 1 before reading." << endl;
                }
                cout << "------------------------------------------------" << endl;
                break;
            
            case 3: {
                int newval, indexno;
                if (size > 0) {
                    cout << "Enter the index number to update: ";
                    cin >> indexno;

                    if (indexno >= 0 && indexno < size) {
                        cout << "Enter new value: ";
                        cin >> newval;
                        box[indexno] = newval;
                    } else {
                        cout << "Invalid index!" << endl;
                    }
                } else {
                    cout << "Please add values using option 1 before updating." << endl;
                }
                cout << "------------------------------------------------" << endl;
                break;
            }
            
            case 4: {
                int indexno;
                if (size > 0) {
                    cout << "Enter the index number to delete: ";
                    cin >> indexno;
                    
                    if (indexno >= 0 && indexno < size) {
                        for (int i = indexno; i < size - 1; i++) {
                            box[i] = box[i + 1];
                        }
                        size--;
                        cout << "Value successfully deleted!" << endl;
                    } else {
                        cout << "Invalid index! Please enter a valid index (0 to " << size - 1 << ")." << endl;
                    }
                } else {
                    cout << "Please add values using option 1 before deleting." << endl;
                }
                cout << "------------------------------------------------" << endl;
                break;
            }

            case 5:
                cout << "Exiting...!" << endl;
                cout << "------------------------------------------------" << endl;
                break;
            
            default:
                cout << "Invalid Input! Please choose a number between 1 to 5." << endl;
                cout << "------------------------------------------------" << endl;
                break;
        }
    } while (user != 0);
}