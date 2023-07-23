#include <iostream> 
#include <stack>

using namespace std;

void print_STACK(stack<int> s) {
    stack<int> x = s;
    while(!x.empty()) {
        cout << x.top() << endl;
        x.pop();
    }
}

int main() {
    stack<int> s;
    for (int i = 0; i <= 5; i++) {
        s.push(i);
    }

    cout << "The elements of the stack are: " << endl;
    print_STACK(s);

    cout << "The Size of elements of the stack is: " << s.size() << endl;

    cout << "The TOP element of the stack: " << s.top() << endl;

    cout << "POP the top element: " << endl;
    s.pop();

    print_STACK(s);

    return 0;
}