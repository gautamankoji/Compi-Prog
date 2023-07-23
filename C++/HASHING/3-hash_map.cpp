#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        m[a[i]]++;
    }

    // for(auto x : m) {
    //     cout << x.first << " -> " << x.second << endl;
    // }

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << m[num] << " ";
    }
    return 0;
}

/* Sample Testcase
    [INPUT]
    n   = 6
    arr = 1 1 33 4 3 1
    q   = 3
    qi  = 1 4 33
    
    [OUTPUT]
    3 1 1 
*/