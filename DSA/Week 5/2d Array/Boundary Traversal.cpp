// You are given a matrix of size n×m
//  filled with integers. Your task is to print the boundary traversal of the matrix in clockwise order, starting from the top-left corner.

// Input
// The first line contains two integers n
//  and m
//  (1≤n,m≤1000
// ), the number of rows and columns.

// Each of the next n
//  lines contains m
//  integers ai,j
//  (1≤ai,j≤109
// ), the elements of the matrix.

// Output
// Print the boundary traversal as a sequence of integers separated by spaces.

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    if (n == 1) {
        for (int j = 0; j < m; j++) {
            cout << arr[0][j] << " ";
        }
    } else if (m == 1) {
        for (int i = 0; i < n; i++) {
            cout << arr[i][0] << " ";
        }
    } else {
        for (int j = 0; j < m; j++) {
            cout << arr[0][j] << " ";
        }
        for (int i = 1; i < n; i++) {
            cout << arr[i][m - 1] << " ";
        }
        for (int j = m - 2; j >= 0; j--) {
            cout << arr[n - 1][j] << " ";
        }
        for (int i = n - 2; i > 0; i--) {
            cout << arr[i][0] << " ";
        }
    }

}

int main() {
    int testCases = 1;
    // 	cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}