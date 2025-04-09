#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    string school;

public:
    void stu(string x, int y, string z)
    {
        this->name = x;
        this->age = y;
        this->school = z;
    }
    void stud()
    {
        cout << "+ ------------------------------------" << endl;
        cout << "| Student Name : " << name << endl;
        cout << "| Student Age : " << age << endl;
        cout << "| Student School Name : " << school << endl;
        cout << "+ ------------------------------------" << endl;
    }
};
int main()
{
    student s1[5];
    string x;
    int y;
    string z;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter The Name : ";
        cin >> x;
        cout << "Enter The Age : ";
        cin >> y;
        cout << "Enter The School Name : ";
        cin >> z;
        cout << "======================================" << endl;
        s1[i].stu(x, y, z);
    }
    for (int i = 0; i < 5; i++)
    {
        s1[i].stud();
    }
}