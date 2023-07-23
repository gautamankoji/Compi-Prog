#include <iostream>
#include <queue>

using namespace std;

void print_QUEUE(queue<int> q) {
    queue<int> x = q;
    while(!x.empty()) {
        cout << x.front() << endl;
        x.pop();
    }
}

int main() {
    queue<int> q;
    for(int i = 0; i <= 5; i++) {
        q.push(i);  // enters the elements into the queue
    }

    cout << "The Elements of the queue are: " << endl;
    print_QUEUE(q);

    cout << "The Size of the queue: " << q.size() << endl;

    cout << "The front element of the queue: " << q.front() << endl;

    cout << "The last element of the queue: " << q.back() << endl;

    cout << "POP the front element: " << endl; 
    q.pop();    // removes the front(first) elemement

    print_QUEUE(q);
}