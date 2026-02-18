// You are given a 2D array of size n×m
//  containing integers.

// Your task is to print all the elements of the matrix row by row.

// Input
// The first line contains two integers n
//  and m
//  (1≤n,m≤1000
// ).

// The next n
//  lines each contain m
//  integers, the elements of the matrix. All elements satisfy 0≤ai,j≤105
// .

// Output
// Print all elements of the matrix row by row, separated by spaces.

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<arr[i][j]<<" ";
        }
    }
}

int main() {
	int testCases=1;
// 	cin>>testCases;
    for(int i=0;i<testCases;i++){
        solve();
    }
}
