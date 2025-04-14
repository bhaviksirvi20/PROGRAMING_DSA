#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

int main() {
    vector<int> v; // create an empty vector

    // 1. push_back() - Add elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "After push_back: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // 2. pop_back() - Remove last element
    v.pop_back();
    cout << "After pop_back: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // 3. size() - Number of elements
    cout << "Size: " << v.size() << endl;

    // 4. empty() - Check if vector is empty
    cout << "Is Empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 5. at(index) - Access specific index
    cout << "Element at index 1: " << v.at(1) << endl;

    // 6. front() - First element
    cout << "Front: " << v.front() << endl;

    // 7. back() - Last element
    cout << "Back: " << v.back() << endl;

    // 8. insert() - Insert at position
    v.insert(v.begin() + 1, 99);
    cout << "After insert at index 1: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // 9. erase() - Remove from position
    v.erase(v.begin() + 1);
    cout << "After erase at index 1: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // 10. begin() & end() - Iterators
    cout << "Using begin() to end(): ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 11. resize() - Resize vector
    v.resize(5); // new elements are 0
    cout << "After resize(5): ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // 12. clear() - Remove all elements
    v.clear();
    cout << "After clear(), size = " << v.size() << endl;

    // 13. Refill and sort()
    v.push_back(30);
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);

    sort(v.begin(), v.end()); // sorting sort()
    cout << "After sort(): ";
    for (int i : v) cout << i << " ";
    cout << endl;

    return 0;
}
