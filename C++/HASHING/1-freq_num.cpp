#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // max 12
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << hash[num] << " ";
    }

    return 0;
}

/* Sample Testcase
    [INPUT]
    n   = 12
    arr = 1 1 2 2 3 4 2 1 4 6 7 3
    q   = 4
    qi  = 1 2 3 6
    
    [OUTPUT]
    3 3 2 1 
*/