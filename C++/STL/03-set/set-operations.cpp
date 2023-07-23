#include <bits/stdc++.h>
#include <set>

using namespace std;

int main () {
    set<int> s;

    // initializing the set
    for(int i = 1; i <= 10; i++) {
        s.insert(i);    
    }

    // dislaying the set
    cout << "Elements in the set: ";
        for (auto it = s.begin(); it != s.end(); it++) {
            cout << *it << " ";
        }
    cout << endl;

    //  for finding the element with the key given
    int key = 2;
    if(s.find(key) != s.end())
        cout << key << " is present in the set!" << endl;


    
    s.erase(s.begin());     // deleating the first element
    //  displaying the set after deletion of the first element
    cout << "Elements After deleting the first element: ";
    for(auto it = s.begin(); it !=  s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Size of the set: " << s.size() << endl;

    if(s.empty() == false) 
        cout << "The set is not empty" << endl;
    else   
        cout << "The set is empty" << endl;

    s.clear();

    cout << "Size of the set after clearing the set: " << s.size() << endl;

    return 0;
}