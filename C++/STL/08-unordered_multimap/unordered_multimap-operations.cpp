#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    unordered_multimap<int, int> mp;
    for(int i = 1; i <= 5; i++) {
        mp.insert({i, i*10});
    }

    mp.insert({60, 447});

    cout << "Elements in the unordered-multimap: " << endl;
    cout << "Key\tValue" << endl;
    for(auto it : mp) {
        cout << it.first << "\t" << it.second << endl;
    }
    cout << endl;

    int key = 2;
    if(mp.find(key) != mp.end()) {
        cout << "Element " << key << " is in the unordered multimap!" << endl; 
    }

    mp.erase(mp.begin());
    cout << "Elements after removing the first element of the unordered multimap" << endl;
    cout << "Key\tValue" << endl;
    for(auto it : mp) {
        cout << it.first << "\t" << it.second << endl;
    }
    
    cout << "Size of the unordered multimap: "<< mp.size() << endl;

    if(mp.empty() == false) {
        cout << "Map is not Empty!" << endl;
    } else {
        cout << "Map is Empty!" << endl;
    }

    mp.clear();
    cout << "Size after clearing all the elements from the map: " << mp.size() << endl;

    return 0;
}