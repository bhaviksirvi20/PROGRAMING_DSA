#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    string color;
    string price;
    string model;

public:
    void Showroom(string name, string color, string price, string model) // set
    {
        this->name = name;
        this->color = color;
        this->price = price;
        this->model = model;
    }

    void Top_Cars() // get
    {
        cout << "+---------------------------------+" << endl;
        cout << "| Name    : " << name << endl;
        cout << "| Color   : " << color << endl;
        cout << "| Price   : " << price << endl;
        cout << "| Model   : " << model << endl;
        cout << "+---------------------------------+" << endl;
    }
};

int main()
{
    Car Rolls_Royce, Ferrari, Lamborghini, Bugatti;

    Rolls_Royce.Showroom("Rolls_Royce", "Black", "Only 6.95 cr", "Phantom");
    Ferrari.Showroom("Ferrari", "Gray", "Only 4.20 cr", "F8 Tributo");
    Lamborghini.Showroom("Lamborghini", "Light Blue", "Only 8.89 cr", "Huracan Evo");
    Bugatti.Showroom("Bugatti", "French Recing Blue", "Only 29.99 cr", "Chiron");

    Rolls_Royce.Top_Cars();
    Ferrari.Top_Cars();
    Lamborghini.Top_Cars();
    Bugatti.Top_Cars();
}