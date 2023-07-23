#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {  // O(n^2)
    // logic implementation section
    for(int i = 1; i < n; i++) {
        int j = i-1, key = arr[i];
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    
    // main section 
    int arr[] = {12, 11, 24, 5, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    insertionSort(arr, n);
    print(arr, n);
    return 0;
}