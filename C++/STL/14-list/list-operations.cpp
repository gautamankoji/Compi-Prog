#include <iostream>
#include <list>
using namespace std;

void printLIST(list<int> li) {
    list<int>::iterator it;
    for(it = li.begin(); it != li.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> li;
    li.push_back(10);
    li.push_back(50);
    li.push_back(20);
    li.push_back(40);
    li.push_back(30);
    
    cout << "The Elements in List: ";
    printLIST(li);

    cout << "Reversing the List: ";
    li.reverse();
    printLIST(li);
    

    cout << "Sorting the List: ";
    li.sort();
    printLIST(li);

    cout << "size of the list: " << li.size() << endl;
    cout << "First Element of List: " << li.front() << endl;

    cout << "Delting top Element of List: ";
    li.pop_front();
    printLIST(li);

    cout << "Last Element of List: " << li.back() << endl;
    
    cout << "Delting last Element of List: ";
    li.pop_back();
    printLIST(li);

    return 0;
}