// You are given an array A
//  of length n
//  and an integer x
//  (the target). Your task is to count the number of quadruplets (i,j,k,l)
//  such that:

// A[i]−2∗A[j]+3∗A[k]−4∗A[l]=x,

// where 0<i<j<k<l<n
// .

// Input
// The first line contains two integers n
//  and x
//  (1≤n≤100
// , |x|≤106
// ).

// The second line contains n
//  integers A1,A2,…,An
//  (|Ai|≤1000
// ).

// Output
// Print a single integer, the number of quadruplets (i,j,k,l)
//  that satisfy the given condition.
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    
    int number;
    cin>>number;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int count = 0;
    for (int i = 0; i < n-3; i++) {
        for (int j = i+1; j < n-2; j++) {
            for (int k = j+1; k < n-1; k++) {
                for (int l = k+1; l < n; l++) {
                    if((arr[i]-2*arr[j]+3*arr[k]-4*arr[l])==number){
                        count++;
                    }
                }
            }
        }
    }
    cout<<count<<endl;
}

int main() {
    int testCases=1;
    // cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}
