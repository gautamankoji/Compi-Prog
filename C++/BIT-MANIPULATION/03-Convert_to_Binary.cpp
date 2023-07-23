#include <iostream>
using namespace std;

int convertToBinary(int &n) {
    int res = 0;
    int p = 1;
    while(n > 0) {
        int lastBit = (n & 1);
        res += p * lastBit;
        p *= 10;
        n = (n >> 1);
    }
    return res;
}

int main() {
    int n;  /* 5 = 101*/
    cout << "Number: ";
    cin >> n;
    cout << n;
    cout << " = " << convertToBinary(n) << "\n";

    return 0;
}

