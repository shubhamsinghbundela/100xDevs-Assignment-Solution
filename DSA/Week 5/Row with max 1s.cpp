// You are given a binary matrix of size n×m
//  (each element is either 0
//  or 1
// ).

// Your task is to find the index (0-based) of the first row that contains the maximum number of 1s.

// Input
// The first line contains two integers n
//  and m
//  (1≤n,m≤1000
// ).

// The next n
//  lines each contain m
//  integers (0
//  or 1
// ).

// Output
// Print a single integer: the index of the first row with the maximum number of 1s, or −1
//  if no such row exists.

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
    int max=0;
    int location = -1;
    for (int i = 0; i < n; i++) {
        int count =0;
        for (int j = 0; j < m; j++) {
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>max){
            max=count;
            location=i;
        }
    }
    cout<<location;
}

int main() {
	int testCases=1;
// 	cin>>testCases;
    for(int i=0;i<testCases;i++){
        solve();
    }
}
