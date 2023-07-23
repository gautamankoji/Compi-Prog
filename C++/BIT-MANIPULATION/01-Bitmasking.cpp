#include <iostream>
using namespace std;

int getIthBit(int n, int i) {
    int mask = (1 << i);
    return ((n & mask) > 0) ? 1 : 0;
}

void clearIthBit(int &n, int i) {
    int mask = ~(1 << i);
    n = (n & mask);
}

void setIthBit(int &n, int i) {
    int mask = (1 << i);
    n = (n | mask);
}

void updateIthBit(int &n, int i, int value) {
    clearIthBit(n,i);
    int mask = (value << i);
    n = (n | mask);
}

void clearLastIbits(int &n, int i) {
    int mask = (-1 << i);
    n = (n & mask);
}

void clearBitsInRange(int &n, int i, int j) {
    int a = (~0) << (j+1);
    int b = (1 << i) - 1;
    int mask = (a | b);
    n = (n & mask);
}

int main() {
    // int n = 5;   /* 0000 0101*/
    // int n = 13;  /* 0000 1101*/
    int n = 31;  /* 0001 1101*/
    int i = 4;
    // cout << "Enter ith value: ";
    // cin >> i;

    // cout << getIthBit(n, i) << "\n";
    
    // clearIthBit(n, i);

    // setIthBit(n, i);

    // updateIthBit(n, i, 0);

    // clearLastIbits(n, i);

    int j = 5;
    clearBitsInRange(n, i, j);

    cout << n << "\n";

    return 0;
}