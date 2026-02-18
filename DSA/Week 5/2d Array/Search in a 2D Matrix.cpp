// You are given an integer matrix of size n×m
//  and a target integer x
// .

// Your task is to determine whether the value x
//  is present in the matrix.

// Input
// The first line contains three integers n
// , m
// , and x
//  (1≤n,m≤1000
// , 0≤x≤105
// ) — the number of rows, columns, and the target value.

// The next n
//  lines each contain m
//  integers ai,j
//  (0≤ai,j≤105
// ), representing the matrix.

// Output
// Print true if x
//  exists in the matrix, otherwise print false.

#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int target;
    cin>>target;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(arr[i][j]==target){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
 
int main() {
	int testCases=1;
// 	cin>>testCases;
    for(int i=0;i<testCases;i++){
        solve();
    }
}