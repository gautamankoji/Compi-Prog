#include <iostream>
#include <cmath>
using namespace std;

bool anstrongNumber(int n) {
    int x = n;
    int cnt = 0;
    int temp = n;
    while(temp != 0) {
        cnt++;
        temp /= 10;
    }
    int sumOfPower = 0;
    while(n != 0) {
        int rem = n % 10;
        sumOfPower += pow(rem, cnt);
        n /= 10;
    }
    return (sumOfPower == x);
}

int main() {
    int n = 153;
    cout << "Enter Number: ";
    cin >> n;
    if(anstrongNumber(n)) {
        cout << "Yes, " << n  << " is an Armstrong Number\n";
    }
    else {
        cout << "No, " << n << " is not an Armstrong Number\n";
    }
}