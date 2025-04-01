#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Array size : " ;
    cin >> size;
    cout << "---------------------------------" << endl;

    int box1[size];

    cout << "First Array" << endl; 
    for (int i = 0 ; i < size ; i++)
    {
        cout << "Enter number of box1[" << i << "] : ";
        cin >> box1[i];
    }
    
    cout << "=================================" << endl;
    int box2[size];

    cout << "Second Array" << endl; 
    for (int i = 0 ; i < size ; i++)
    {
        cout << "Enter number of box2[" << i << "] : ";
        cin >> box2[i];
    }
    
    cout << "=================================" << endl;

    int sum[size] ; 
    
    cout << "Sum of Array 1 and 2 : " << endl ;
    for (int i = 0 ; i < size ; i++)
    {
        sum[i] = box1[i] + box2[i];
        cout << "sum of box1[" << i << "]" << " + box2[" << i << "] : " << sum[i] << endl;
    }
    cout << "---------------------------------" << endl;
}
  
 