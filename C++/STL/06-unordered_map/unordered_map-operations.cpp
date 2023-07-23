// #include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int,int> mp;
    for(int i = 1; i <= 5; i++) {
        mp.insert({i, i*10});
    }    

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElements" << endl;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it-> first << "\t" << it-> second << endl;
    }
    cout << endl;

    int key = 2;
    if(mp.find(key) != mp.end())
        cout << "Element " << key << " is present in the map!" <<endl;
    
    mp.erase(mp.begin());
    cout << "Elements after deleting the first element of the map: " << endl;
    cout << "Key\tElement" << endl;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }
    cout << endl;

    cout << "Size of the map: " << mp.size() << endl;

    if(mp.empty() == false) {
        cout << "Map not empty."<< endl;
    } else {
        cout << "Map empty.";
    }

    mp.clear();
    cout << "Size of the map: " << mp.size() << endl;

    return 0;
}