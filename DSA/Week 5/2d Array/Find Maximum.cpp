// You are given an integer matrix of size n×m
// .

// Your task is to find the maximum element in the entire matrix.

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
// Print a single integer, the maximum element in the matrix.

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
    int max = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
}
 
int main() {
	int testCases=1;
// 	cin>>testCases;
    for(int i=0;i<testCases;i++){
        solve();
    }
}