#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a = {4, 2, 3, 5, 9, 1};

    sort(a.begin(), a.end());

    for(auto x : a) {
        cout << x << " ";
    }

    return 0;
}