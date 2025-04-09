#include <iostream>
using namespace std;

class stu
{
public:
    int data;
    stu(int aj)
    {
        data = aj;
        cout << "constractor data : " << data << endl;
    }
    ~stu()
    {
        cout << "destractor data : " << endl;
    }
};

int main()
{

    stu obj1(5000);
    stu obj2 = obj1;
}