#include <iostream>
using namespace std;

int main() {

    int mark;

    cout << "Enter Your Marks: ";
    cin >> mark;

    cout << endl << "Result: ";

    if (mark >= 90 && mark <= 100) {
        cout << "Excellent! You got an A Grade." << endl;
    } 
    else if (mark >= 80 && mark <= 89) {
        cout << "Well Done! You got a B Grade." << endl;
    } 
    else if (mark >= 70 && mark <= 79) {
        cout << "Good Job! You got a C Grade." << endl;
    } 
    else if (mark >= 60 && mark <= 69) {
        cout << "Keep Improving! You got a D Grade." << endl;
    } 
    else if (mark >= 50 && mark <= 59) {
        cout << "Need More Effort! You got an E Grade." << endl;
    } 
    else if (mark >= 0 && mark <= 49) {
        cout << " Failed. Keep Trying!" << endl;
    } 
    else {
        cout << "Invalid Marks! " << endl;
    }

}
