#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        cout << hash[c] << " ";
    }

    return 0;
}

/* Sample Testcase
    [INPUT]
    s   = lasdfhawen 
    q   = 3
    qi  = l a s
    
    [OUTPUT]
    1 2 1 
*/