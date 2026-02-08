// You are given an array of integers.

// Reverse the array in the same array (in-place) and then print it.

// Input
// First line contains integer N
//  (1≤N≤105)
//  — size of the array.
// Second line contains N
//  integers A1,A2,…,AN
//  (−109≤Ai≤109)
// .
// Output
// Print the array after reversing it in-place.

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int testCases=1;
    // cin >> testCases;
    
    for(int i=0;i<testCases;i++){
        solve();
    }
}