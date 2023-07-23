#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Number: ";
    cin >> n;

    if((n & (n-1)) == 0) {
        cout << "N = " << n << " is a Power of Two!";
    } else {
        cout << "N = " << n << " is not a Power of Two!";
    }
}

/*
0 = 0000
1 = 0001
2 = 0010
3 = 0011
4 = 0100
5 = 0101
*/