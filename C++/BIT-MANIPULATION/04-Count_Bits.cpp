#include <iostream>
using namespace std;

int cntBits(int n) {
    int cnt = 0;
    while(n > 0) {
        int lastBit = (n & 1);
        cnt += lastBit;
        n = n >> 1;
    }
    return cnt;
}

int countBits(int n) {      // faster method
    int cnt = 0;
    while(n > 0) {
        n = (n & (n-1));
        cnt++;
    }
    return cnt;
}

int main() {
    int n;  /* 5 = 0000 0101 */
    cout << "Number: ";
    cin >> n;
    cout << "Set Bits in " << n << ": " << cntBits(n) << "\n";
    cout << "Set Bits in " << n << ": " << countBits(n) << "\n";

    return 0;
}