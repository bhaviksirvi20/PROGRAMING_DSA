#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void start(int arr){
    Node *n1; 
    
    for(int i = 0 ; i < arr ; i++){
    if(n1 == NULL){
        n1 = new Node(arr);
        cout << "Enter the Element : " ;
        cin >> arr;
    }
    else{
        Node *temp;
        temp = new Node(arr);
        temp->next = n1;
        n1 = temp;
    }
    }
}
void Read(int *temp){
     Node *temp;
    while(temp != NULL){
        cout << temp->next->data << " " << endl;
        temp = temp->next;
    };
}
int main()
{
    int user , add , arr;
    Node *n1; 
    Node *temp;
    
        cout << "======= Curd Operation ======= " << endl;
    do{
        cout << "1. Insert" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "0. Exit..." << endl;
        cout << "==============================" << endl;
        cout << "Enter your choise : " ;
        cin >> user;
        switch(user) {
            case 1:
                cout  << "1. Start" << endl;
                cout  << "2. At Any Position" << endl;
                cout  << "3. Last" << endl;
                cout << "==============================" << endl;
                cout << "Enter the Insert Value : " ;
                cin >> add ;
                cout << "==============================" << endl;
                switch(user){
                    case 1:
                        
                    
                     start(arr);
                    break;
                    case 2:
                    
                    break;
                    case 3:
                    
                    break;
                    
                    default:
                    break;
                }
            break;
            case 2:
                Read(*temp);
            break;
            case 3:
            
            break;
            case 4:
            
            break;
            case 0:
                
            break;
        }
    }while(user != 0);
}
