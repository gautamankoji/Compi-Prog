// #include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> s;
    for (int i = 0; i <= 10; i++) {
        s.insert(i);
    }
    s.insert(6);

    cout<< "Elements present in the multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    int key = 5;
    if(s.find(key) != s.end()) 
        cout << "Element " << key << " is in the multi set!" << endl;

    s.erase(s.begin());     // erases the first element of the multiset
    cout << "Elements after removing first element: ";
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
 
    cout << "Size of the multiset: " << s.size() << endl;

    if(s.empty() == false) {
        cout << "The multi-set is not empty!" << endl;
    } else {
        cout << "The multi-set is not empty!" << endl;
    }

    s.clear();
    cout << "Size of the muli-set after clearing all the elements: " << s.size() << endl;

    return 0;

}