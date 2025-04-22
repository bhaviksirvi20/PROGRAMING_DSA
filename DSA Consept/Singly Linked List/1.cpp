#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
int main()
{
    node *n1 = new node();
    n1->data = 10;
    n1->next = NULL;

    node *n2 = new node();
    n2->data = 20;
    n2->next = NULL;

    n1->next = n2;

    node *n3 = new node();
    n3->data = 30;
    n3->next = NULL;

    n2->next = n3;
    
    node *n4 = new node();
    n4->data = 20;
    n4->next = NULL;

    n3->next = n4;

    node *n5 = new node();
    n5->data = 20;
    n5->next = NULL;

    n4->next = n5;

    cout << "----------------------" << endl;
    cout << "Data : " << "Address " << endl;
    cout << "----------------------" << endl;
    cout << n1->data << "   : " << n1->next << " " << endl;
    cout << n2->data << "   : " << n2->next << " " << endl;
    cout << n3->data << "   : " << n3->next << " " << endl;
    cout << n4->data << "   : " << n4->next << " " << endl;
    cout << n5->data << "   : " << n5->next << " " << endl;
    cout << "----------------------" << endl;
}