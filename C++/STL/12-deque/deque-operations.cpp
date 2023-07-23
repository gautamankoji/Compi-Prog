#include <iostream>
#include <deque>

using namespace std;

void print_DEQUE(deque<int> dq) {
    deque<int>::iterator it;
    for(it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    cout << "The Elements in the deque are: ";
    for (auto it = dq.begin();it!=dq.end();++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The Size of the Deque: " << dq.size() << endl;

    cout << "The first element in the deque: " << dq.front() << endl;

    cout << "Deleting the first element!" << endl;
    dq.pop_front();

    print_DEQUE(dq);

    cout << "The last element of the Deque: " << dq.back() << endl;

    cout << "Deleting the last element!" << endl;
    dq.pop_back();

    cout << "Size of the Deque: " << dq.size() << endl;

    print_DEQUE(dq);
    
    return 0;
}