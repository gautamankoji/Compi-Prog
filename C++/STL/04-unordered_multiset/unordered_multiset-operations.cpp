#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    unordered_multiset<int> s;
    for(int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    s.insert(5);     // inserting new element to the multi-set

    cout << "Elements present in the unordered multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << ",";
    }
    cout << endl;


    int key = 7;
    auto itr = s.find(key);   // returns iterator pointing at first occurrence of given
    // value, if not found then end is returned
    if (itr!= s.end())
        cout << "Element with Key : "<< key <<"is Present" <<endl;
    else
        cout<<"Element With Key:"<<key<<"Not Found"<<endl;


    if(s.find(key) != s.end())
        cout << "Element with Key : "<< key <<" is Present" <<endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it <<",";
    }
    cout << endl;

    cout << "Size of the unordered multiset: " << s.size() << endl;

    if(s.empty() == false) 
        cout << "The unordered multiset is not empty" << endl;
    else 
        cout << "Thenunordered multiset is empty" << endl;

    s.clear();
    cout << "Size of the multiset after clearing all the elements: " << s.size() << endl;

}   