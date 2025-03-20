// Syntax:
// datatype &red_var_name = actual_var_name;

#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int y = x;

  cout << "x = " << x << endl; // 10
  cout << "y = " << y << endl; // 10

  y = 20;

  cout << "x = " << x << endl; // 10
  cout << "y = " << y << endl; // 20

  cout << "----------------" << endl;

  int num = 10;
  int &ref = num;

  cout << "num = " << num << endl; // 10
  cout << "ref = " << ref << endl; // 10

  ref = 20;

  cout << "num = " << num << endl; // 20
  cout << "ref = " << ref << endl; // 20
}