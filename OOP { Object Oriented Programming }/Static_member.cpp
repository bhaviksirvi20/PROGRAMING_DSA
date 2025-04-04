// static member variable and static member function

#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    string color;
    string price;
    string model;
    static int count;

public: 
    void Showroom(string name, string color, string price, string model)
    {
        this->name = name;
        this->color = color;
        this->price = price;
        this->model = model;
        count++;
    }

    void Top_Cars()
    {
        cout << "+---------------------------------+" << endl;
        cout << "| Name    : " << name << endl;
        cout << "| Color   : " << color << endl;
        cout << "| Price   : " << price << endl;
        cout << "| Model   : " << model << endl;
        cout << "+---------------------------------+" << endl;
    }

    static void Show_Count()
    {
        cout << "Total Cars : " << count << endl;
    }
};

int Car::count = 0;

