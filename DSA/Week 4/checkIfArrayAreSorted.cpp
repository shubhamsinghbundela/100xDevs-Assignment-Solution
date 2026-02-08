// Given an array of N
//  integers, determine whether it is sorted in ascending order.

// Input
// An array A1,A2,…,AN
//  is sorted in ascending order if Ai≤Ai+1
//  for all 1≤i<N
// .

// Output
// Print YES if the array is sorted in ascending order, otherwise print NO.

// Any letter case is accepted, so yEs, YeS, nO, etc. are also valid.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool flag = false;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}