// You have been given an integer array of size N
//  that contains only integers 0
//  and 1
// .

// Print the sorted array of 01.

// Input
// 1≤t≤102
// 0≤N≤105
// Output
// Print the expected array.

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            c0 += 1;
        }
        if (arr[i] == 1) {
            c1 += 1;
        }
    }

    for (int i = 0; i < c0; i++) {
        cout << 0 << " ";
    }
    for (int i = 0; i < c1; i++) {
        cout << 1 << " ";
    }
}

int main() {
    int testCases;
    cin >> testCases;
    
    for(int i=0;i<testCases;i++){
        solve();
    }
}