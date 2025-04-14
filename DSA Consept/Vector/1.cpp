#include<iostream>
#include<vector>
#include<algorithm> // for sort() mate 
using namespace std;

int main()
{
    vector<int> b;

    b.push_back(20);
    b.push_back(30);
    b.push_back(40);
    b.push_back(50);
    
    // 1. push_back() create Array 
    cout << "Add Value : " ;
    for(int i : b) cout << i << " ";
    cout << endl;
    
    // 2. pop_back() last value remove 
    b.pop_back();
    cout << "Last Value Remove : " ;
    for(int i : b) cout << i << " ";
    cout << endl;

    // 6. size() calculate the size
    cout << "size : " << b.size() ;
    cout << endl;
    
    // 7. empty() True or False 
    cout << "Empty : " ;
    if(b.empty())
    {
        cout  << "Yes" << endl;
    }
    else{
         cout  << "No" << endl;
    }
    
    // 8. at() index no enter karne pr uski value dikhata he 
    cout << "Index no : " << b.at(2) ;
    cout << endl;
    
    // 9. front() first value
    cout << "First value : " << b.front() ;
    cout << endl;
    
    // 10. back() last value { end() }
    cout << "Last value : " << b.back() ;
    cout << endl;
    
    // 3. insert() starting add value
    b.insert(b.begin() + 1, 21);
    cout << "index no 1 Insert value : "  ;
    for(int i : b) cout << i << " ";
    cout << endl;
    
    // 4. erase() index no to value remove 
    b.erase(b.begin() + 0);
    cout << "index no 1 Erase value : "  ;
    for(int i : b) cout << i << " ";
    cout << endl;
    
     // 11. begin()  begin() & end()
    cout << "Begin value : "  ;
    for(auto i = b.begin() ; i != b.end() ; i++){
        cout << *i << " ";
    }
    cout << endl;
    
    // 5. clear() clear the all value 
    b.clear();
    cout << "clear the all value : 0"  ;
    for(int i : b) cout << i << " ";
    cout << endl;

    
    // 13. refill and sort()
    b.push_back(50);
    b.push_back(20);
    b.push_back(30);
    b.push_back(10);
    
    sort(b.begin() , b.end());
    cout << "After sort(): " ;
    for(int i : b)
    cout << i << " ";
    cout << endl;
}