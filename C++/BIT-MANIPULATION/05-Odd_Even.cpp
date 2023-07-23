#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Number: ";
    cin >> x;
    if((x & 1)) {
        cout << "Odd" << "\n";
    }else {
        cout << "Even" << "\n";
    }
}