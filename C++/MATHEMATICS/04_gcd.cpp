#include <iostream>
using namespace std;

// #define USING_MAIN_1
#define USING_MAIN_2

#ifdef USING_MAIN_1
// Approach 1: Brute Force
int main() {
    int n1 = 4, n2 = 8;
    int ans = 0;
    for(int i = 1; i <= min(n1, n2); i++) {
        if(n2 % i == 0 && n2 % i == 0) {
            ans = i;
        }
    }
    cout << "GCD of " << n1 << " and " << n2 << ": " << ans << endl;

    return 0;
}

/*  Complexity Analysis
    Time Complexity: O(N).
    Space Complexity: O(1).

*/
#endif


#ifdef USING_MAIN_2

// Approach 2: Optimal Solution

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter values of A and B: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl;
}

/*  Complexity Analysis
    Time Complexity: O(logɸmin(a,b)), where ɸ is 1.61.
    Space Complexity: O(1).
*/
#endif

