#include <iostream>
#include <map>

using namespace std;

int main () {
    multimap<int,int> mp;

    for (int i = 0; i <= 5; i++) {
        mp.insert({i, i*10});
    }
    mp.insert({45, 2331});


    cout << "Elements in the multimap: " << endl;
    cout << "KEy\tValue" << endl;
    for( auto it : mp) {
        cout << it.first << "\t" << it.second << endl; 
    }
    cout << endl;

    int key = 4;
    if(mp.find(key) != mp.end()) {
        cout << "Element " << key << " is in the multimap!" << endl;
    }

    mp.erase(mp.begin());   // removes the first key-value
    cout << "Elements after removing the first element: " << endl;
    cout << "KEy\tValue" << endl;
    for( auto it : mp) {
        cout << it.first << "\t" << it.second << endl; 
    }
    cout << endl;

    cout << "Size of the multi-map: " << mp.size() << endl;

    if(mp.empty() == false) {
        cout << "Multi-map is not empty!" << endl;
    } else {
        cout << "Multi-map is empty!" << endl;
    }

    mp.clear();
    cout << "SIze of the multimap after clearing the map: " << mp.size() << endl;

    return 0;
}