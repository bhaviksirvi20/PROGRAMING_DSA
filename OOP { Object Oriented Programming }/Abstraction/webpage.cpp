#include <iostream>
using namespace std;

class webpage
{
public:
    virtual void nav() = 0;
    virtual void header() = 0;
    virtual void hero() = 0;
    virtual void section() = 0;
    virtual void article() = 0;
    virtual void footer() = 0;
};

class b
{
public:
    void nav()
    {
        cout << "| ☺ Navbar                      |" << endl;
    }
    void header()
    {
        cout << "| ☻ Header Section              |" << endl;
    }

    void hero()
    {
        cout << "| ☺ Hero Section                |" << endl;
    }

    void section()
    {
        cout << "| ☻ Section                     |" << endl;
    }

    void article()
    {
        cout << "| ☺ Artical Section             |" << endl;
    }

    void footer()
    {
        cout << "| ☻ Footer Section              |" << endl;
    }
};

int main()
{
    cout << "+ ------------------------------ + " << endl;
    cout << "| ► Website Section Name :      |" << endl;
    cout << "+ ------------------------------ + " << endl;
    b obj1;
    obj1.nav();
    obj1.header();
    obj1.hero();
    obj1.section();
    obj1.article();
    obj1.footer();
    cout << "+ ------------------------------ + " << endl;
}