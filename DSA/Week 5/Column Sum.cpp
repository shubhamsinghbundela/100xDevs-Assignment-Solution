// You are given an integer matrix of size n×m
// .

// Your task is to compute the sum of each column.

// Input
// The first line contains two integers n
//  and m
//  (1≤n,m≤1000
// ). The next n
//  lines each contain m
//  integers ai,j
//  (0≤ai,j≤105
// ), representing the matrix.

// Output
// Print m
//  integers separated by spaces, the sum of each column in order.

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
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
           sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
}
 
int main() {
	int testCases=1;
// 	cin>>testCases;
    for(int i=0;i<testCases;i++){
        solve();
    }
}