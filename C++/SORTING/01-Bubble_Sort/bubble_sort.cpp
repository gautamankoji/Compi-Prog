#include <bits/stdc++.h>
#define RUN_TIME
#define fastio() ios_base::sync_with_stdio(false)
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int a[], int n) {
    for(int i=0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int a[], int n) {   // O(n^2)
    // logic implementation section
    int i, j;
    bool swapped;
    for(i = 0; i < n - 1; i++) {
        swapped = false;
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }    
}

int main() {
    fastio();

    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    print(arr, N);

#ifdef RUN_TIME
    cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}