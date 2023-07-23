#include <iostream>
#include <cmath>
using namespace std;

// #define USING_MAIN_1
#define USING_MAIN_2


#ifdef USING_MAIN_1
// Approach 1: Brute Force

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Divisors of " << n << ": " << endl;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}

/*  Complexity Analysis 
    Time Complexity: O(n), because the loop has to run from 1 to n always.
    Space Complexity: O(1), we are not using any extra space.
*/
#endif

#ifdef USING_MAIN_2
// Approach 2: Optimal Solution

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Divisors of " << n << ": " << endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}
	cout << "\n";
    return 0;
}

/*  Complexity Analysis
    Time Complexity: O(sqrt(n)), because every time the loop runs only sqrt(n) times.
    Space Complexity: O(1), we are not using any extra space.
*/
#endif