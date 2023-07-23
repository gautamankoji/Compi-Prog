#include <iostream>
#include <map>

using namespace std;

int main () {
    map<int, int> mp;
    for(int i = 1; i <= 5; i++) {
        mp.insert({i,  i*10});
    }

    cout << "Elements in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it : mp) {    // efficient one(for each loop)
        cout<<it.first<<"\t"<<it.second<<endl;
    }
    cout << endl;

    cout << "Key\tElement" << endl;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }
    cout << endl;

    int key = 4;
    if(mp.find(key) != mp.end()) 
        cout << "Element " << key << " is present in the map!" << endl;
    
    mp.erase(mp.begin());
    cout << "Element in the map after removing the first element: " << endl;
    cout << "Key\tElement" << endl;
    for(auto it : mp) {
        cout << it.first << "\t" << it.second << endl;
    }

    cout << "Size of the map: " << mp.size() << endl;

    if(mp.empty() == false) {
        cout << "Map is not Empty" << endl;
    } else {
        cout << "Map is Empty" << endl;
    }

    mp.clear();
    cout << "Size of the map after clearing all the elements: " << mp.size() << endl;

    return 0;
}