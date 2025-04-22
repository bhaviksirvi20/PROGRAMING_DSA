#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void insertAtPosition(int value, int position) {
        if (position < 1) {
            cout << "Invalid position!" << endl;
            return;
        }

        if (position == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;
        int count = 1;

        while (temp != NULL && count < position - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) {
            cout << "Position out of range!" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    int choice, value, pos;

    do {
        cout << "\n==== MENU ====\n";
        cout << "1. Insert\n";
        cout << "2. Display\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nInsert Options:\n";
            cout << "1. At Beginning\n";
            cout << "2. At End\n";
            cout << "3. At Any Position\n";
            cout << "Choose insert option: ";
            int insertChoice;
            cin >> insertChoice;

            cout << "Enter value to insert: ";
            cin >> value;

            switch (insertChoice) {
            case 1:
                list.insertAtBeginning(value);
                break;
            case 2:
                list.insertAtEnd(value);
                break;
            case 3:
                cout << "Enter position: ";
                cin >> pos;
                list.insertAtPosition(value, pos);
                break;
            default:
                cout << "Invalid insert option!" << endl;
            }
            break;

        case 2:
            cout << "Linked List: ";
            list.display();
            break;

        case 3:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}
