#include<iostream>
using namespace std;

class a{
    private:
    int a;
    
    public: 
    void set(int a){
        this->a = a;
    }
    void get(int a){
        cout << "Get value : " << a << endl;
    }

};

int main()
{
    a obj;
    obj.get(5);
}