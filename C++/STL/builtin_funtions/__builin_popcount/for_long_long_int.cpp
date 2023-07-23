#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n = 77777777777777;   // -> 23
    cout << __builtin_popcountll(n);
    return 0;
}