#include <iostream>
using namespace std;

char bhavik(char m)
{
    if(m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u' ){
        cout << "Vowel..." << endl;
    }
    else {
        cout << "Consonant..." << endl;
        }
    return 1;
   
}
int main()
{
    char a;
    cout << "Enter The Number : " ;
    cin >> a;

    cout << "--------------------------" << endl;
    bhavik(a);
}