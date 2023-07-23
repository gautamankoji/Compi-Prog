/*  Count the number of digits in the given number  */

#define USING_MAIN_1    // comment it to use next main() func
// #define USING_MAIN_2
// #define USING_MAIN_3

#include <iostream>
#include <string>

using namespace std;

#ifdef USING_MAIN_1
// Approach 1
int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int cnt = 0;
    while(n != 0) {
        n /= 10;
        cnt++;
    }
    cout << "Sum of digits of " << n << " : ";
    cout << cnt << endl;
}
#endif 
// --------------------------------------------------------------------------------------------------------------------------------------------------

#ifdef USING_MAIN_2

// Approach 2
int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    string num = to_string(n);
    cout << "Sum of the digits of " << n << " : " << num.length() << endl;

    return 0;
}

#endif 
// --------------------------------------------------------------------------------------------------------------------------------------------------
#include <cmath>

#ifdef USING_MAIN_3

// Approach 3
int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "Sum of the digits of " << n << " : " << (floor(log10(n)) + 1)<< endl;

    return 0;
}

#endif 
// --------------------------------------------------------------------------------------------------------------------------------------------------