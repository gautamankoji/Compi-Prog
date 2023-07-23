/* Logical Bitwise Operations */
/*
 * AND      [ & ] 
 * OR       [ | ] 
 * NAND     [ ~(&) ]
 * NOR      [ ~(&) ]
 * XOR      [ ^ ]
 * NOT      [ ~ ]
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    int x = 5;    /* 5 = 0000 0101 */
    int y = 9;    /* 9 = 0000 1001 */
    cout << "x = " << x << ", y = " << y << "\n" << endl;;

    cout << "~(x) = " << ~(x) << "\n";          /* NOT(x)   = 1111 1010 */
    cout << "~(y) = " << ~(y) << "\n";          /* NOT(y)   = 1111 0110 */
    cout << "x & y = " << (x & y) << "\n";      /* 5 AND 9  = 0000 0001 */
    cout << "x | y = " << (x | y) << "\n";      /* 5 OR y   = 0000 1101 */
    cout << "~(x & y) = " << ~(x & y) << "\n";  /* 5 NAND y = 1111 1110 */
    cout << "~(x | y) = " << ~(x | y) << "\n";  /* 5 NOR 9  = 1111 0010 */
    cout << "x ^ y = " << (x ^ y) << "\n";      /* 5 XOR 9  = 0000 1100 */

    cout << "x << 1 = " << (x << 1) << "\n";    /* 5 LEFT-SHIFT 1  = 0000 1010 */
    cout << "x >> 1 = " << (x >> 1) << "\n";    /* 5 RIGHT-SHIFT 1 = 0000 0100 */

    return 0;
}

/* OUTPUT:
x = 5, y = 9

~(x) = -6
~(y) = -10
x & y = 1
x | y = 13
~(x & y) = -2
~(x | y) = -14
x ^ y = 12
x << 1 = 10
x >> 1 = 2
*/