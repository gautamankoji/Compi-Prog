#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 7;
    cout << __builtin_popcount(n);  // -> 3
    return 0;
}