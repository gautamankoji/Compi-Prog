#include <iostream>
using namespace std;

bool palindrome(int n) {
    int temp = n;
    int res = 0;
    while(temp != 0) {
        int rem = temp % 10;
        res = res*10 + rem;
        temp /= 10;
    }
    return (res == n);
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if(palindrome(n)) {
        cout << n <<" is a Palindromic number" << endl;
    } else {
        cout << n << " is not a Palindromic number" << endl;
    }   

    return 0;
}