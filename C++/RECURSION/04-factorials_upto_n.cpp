#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int
#define vlli vector<long long int>
#define ll long long
#define vll vector<long long>

class Solution {
    public:
    vll v;
    long long int fact = 1;
    void Factorial(ll N, ll i) {
        fact *= i;
        if(fact > N) return;
        v.push_back(fact);
        Factorial(N, i+1);
    }
    vll factorialNumbers(ll N) {
        Factorial(N, 1);
        return v;
    }
};

int main() {
    ios_base::sync_with_stdio(false);

    // main section 
    int t = 1;
    cin >> t;
    while(t--) {
        ll N;
        cin >> N;
        Solution obj;
        vll ans = obj.factorialNumbers(N);
        for(auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    };
    return 0;
}
