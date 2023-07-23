#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    unordered_map<char, int> m;
    for(int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }

    // for(auto x : m) {
    //     cout << x.first << " -> " << x.second << endl;
    // }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        cout << c << " -> " << m[c] << endl;
    }

    return 0;
}

/* Sample Testcase
    [INPUT]
    s = dskvmowv
    q = 3
    qi = d s a
    
    [OUTPUT]
    d -> 1
    s -> 1
    a -> 0
*/