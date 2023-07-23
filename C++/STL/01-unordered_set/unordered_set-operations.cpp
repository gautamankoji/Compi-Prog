#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>

using namespace std;

int main () {
    unordered_set<int>  s;

    // inserting element to the unordered set
    for(int i = 0; i <= 10; i++) {
        s.insert(i);     
    }
    s.insert(99);
    // displaing elements of the unordered set
    cout << "Elements in unordered set: ";
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";     // s
    }
    cout << endl;
    // Elements in unordered set: 10 3 2 1 0 4 5 6 99 7 8 9

    // searching element in the unordered set
    int key = 2;
    if (s.find(key)!= s.end()) {
        cout << key << " is present in unoredered set" << endl;
    }
    // 2 is present in unoredered set

    // deleting the first element of the unrdered set
    s.erase(s.begin());
    cout << "Elements after deleting the first element in unordered set: ";
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";     // s
    }
    cout << endl;
    // Elements after deleting the first element in unordered set: 3 2 1 0 4 5 6 99 7 8 9

    // size of unoredered set
    auto size = s.size();   // returns number of elements in an ordered set
    cout << "\nSize of unordered_set : "<<size<<endl;
    // Size of unordered_set : 11

    // checking wheather the set is empty or not
    if(s.empty() == false) {
        cout<<"unordered_set is NOT EMPTY"<<endl;
    } else {
        cout<<"unordered_set IS EMPTY"<<endl;
    }
    // unordered_set is NOT EMPTY

    // clearing elements in the unordered set 
    s.clear();
    cout << "Size after clearing the elements: " << s.size() << endl;
    // Size after clearing the elements: 0
    return 0;
}