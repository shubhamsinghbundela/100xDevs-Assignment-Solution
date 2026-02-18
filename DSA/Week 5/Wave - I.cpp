// ou are given a 2D array of size n×m
//  containing integers.

// Your task is to print all the elements of the matrix row by row in wave form: Print the first row from left to right, the second row from right to left, and so on...

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
// Print the expected wave form, as shown in the example.

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
        if(i%2==0){
            for (int j = 0; j < m; j++) {
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
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
