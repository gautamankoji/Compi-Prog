/*
EXAMLPE:
N = 1000000000
M = 10101
i = 2, 1 = 6
Output: 1001010100
*/

#include <iostream>
using namespace std;

void clearBitsInRange(int &n, int i, int j) {
    int a = (~0) << (j+1);
    int b = (1 << i) - 1;
    int mask = (a | b);
    n = (n & mask);
}

void replaceBits(int &n, int i, int j, int m) {
    clearBitsInRange(n, i, j);
    int mask = (m << i);
    n = (n | mask);
}

int main() {
    int n = 15;     /* 0000 1101 */
    int i = 1;
    int j = 3;
    int m = 2;      /* 0000 0010 */

    replaceBits(n, i, j, m);

    cout << n << "\n";      /* 5 = 0000 0101 */

    return 0;
}