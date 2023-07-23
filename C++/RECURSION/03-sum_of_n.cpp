#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int
#define vlli vector<long long int>
#define ll long long
#define vll vector<long long>

class Solution {
    public:
    ll sumOfSeries(ll N) {
        if(N == 0) return 0;
        return (N * (N+1)/ 2)*(N * (N+1)/ 2);
        // 1^3 + 2^3 + 3^3 + 4^3 + … till N
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
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    };
    return 0;
}