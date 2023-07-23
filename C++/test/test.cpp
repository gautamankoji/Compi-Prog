#include <bits/stdc++.h>
using namespace std;

vector<int> cntFreq(int n, int x, vector<int> &nums) {
        vector<int> hash;
        map<int, int> m;
        for(int i = 0; i < n; i++) {
            m[nums[i]]++;
            hash.push_back(m[i]);
        }
        return hash;
}

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
    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << m[num] << " ";
    }
    return 0;
}