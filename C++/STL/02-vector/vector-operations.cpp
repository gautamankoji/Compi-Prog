#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main () {
    vector<int> v;

    // inserting elements in the vector
    for(int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    // diplaing elements of the vector
    cout << "Elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    // Elements in the vector: 0 1 2 3 4 5 6 7 8 9 


    // 
    cout << "\nThe front element of the vector: " << v.front() << endl;
    cout << "\nThe last element of the vector: " << v.back() << endl;

    cout << "\nThe size of the vector: " << v.size() << endl;
    
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();


    cout << "\nAfter Deleting the last element: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // inserting element at the begining of the vector
    cout << "\nInserting \"5\" at the begining: " << endl;
    v.insert(v.begin(),5);
    cout << "\nThe first element: " << v[0] << endl;

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\nErasing the first element: " << endl;
    v.erase(v.begin());

    cout << "\nNow the first element: " << v[0] << endl;

    if(v.empty()) 
        cout << "\nvector is empty";
    else   
        cout << "\nvector is not empty";
    
    v.clear();
    cout << "\nSize of the vector after clearing the vector: " << v.size() << endl;
    return 0;
}