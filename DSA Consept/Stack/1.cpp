#include <iostream>
using namespace std;

void push(int stack[], int userval, int &size)
{
    size++;
    for (int i = 0; i <= size; i++)
    {

        stack[size] = userval;
        cout << stack[i] << endl;
    }
}
void pop(int stack[], int &size)
{
    size--;
    for (int i = 0; i <= size; i++)
    {

        cout << stack[i] << endl;
    }
}
void peek(int stack[], int &size)
{
    cout << "Top value : " << stack[size] << endl;
}
void isEmpty(int stack[], int &size)
{
    if (size == -1)
    {
        cout << "Stack is Empty ( Blank ) !" << endl;
    }
    else
    {
        cout << "Stack is Not Empty ( Blank )..." << endl;
    }
}
void isFull(int stack[], int &size, int arr)
{
    if (arr == size + 1)
    {
        cout << "Stack is Full ( Blank ) !" << endl;
    }
    else
    {
        cout << "Stack is Not Full ( Blank )..." << endl;
    }
}
void Size(int &size)
{
    cout << "Size : " << size + 1 << endl;
}
int main()
{
    int user, userval, arr;
    int size = -1;
    int *stack = new int[user];
    cout << "Enter array size : ";
    cin >> arr;
    cout << "---------------------------------------------" << endl;
    do
    {

        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. is Empty" << endl;
        cout << "5. is Full" << endl;
        cout << "6. Size" << endl;
        cout << "0. Exit" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Enter Your Choise : ";
        cin >> user;
        cout << "---------------------------------------------" << endl;

        switch (user)
        {
        case 1:
            cout << "Enter The Size : ";
            cin >> userval;
            push(stack, userval, size);
            break;
        case 2:
            pop(stack, size);
            break;
        case 3:
            peek(stack, size);
            break;
        case 4:
            isEmpty(stack, size);
            break;
        case 5:
            isFull(stack, size, arr);
            break;
        case 6:
            Size(size);
            break;
        case 0:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Ples Enter The No. (0 to 6)..." << endl;
            break;
        }
        cout << "=============================================" << endl;
    } while (user != 0);
}