#include <iostream>
#include <cmath>
using namespace std;

// #define USING_MAIN_1
#define USING_MAIN_2

#ifdef USING_MAIN_1
// Appraoch 1: Brute Force

bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if(n != 1 && isPrime(n) == true) {
        cout << n << " is a Prime Number!" << endl;
    } else {
        cout << n << " is not a Prime Number!" << endl;
    }
    return 0;
}

/*  Complexity Analysis
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#endif 


#ifdef USING_MAIN_2
// Appraoch 1: Brute Force

bool isPrime(int n) {
    for(int i = 2; i < sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if(n != 1 && isPrime(n) == true) {
        cout << n << " is a Prime Number!" << endl;
    } else {
        cout << n << " is not a Prime Number!" << endl;
    }
    return 0;
}

/*  Complexity Analysis
    Time Complexity: O(√n)
    Space Complexity: O(1)
*/
#endif 