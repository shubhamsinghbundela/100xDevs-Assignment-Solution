// You are given an array A
//  of size n
// . Your task is to swap every pair of alternate elements in the array.

// Input
// The first line contains a single integer t
//  (1≤t≤100
// ) — the number of test cases.

// Each test case consists of two lines:

// The first line contains an integer n
//  (0≤n≤105
// ) — the size of the array.
// The second line contains n
//  integers a1,a2,…,an
//  (1≤ai≤109
// ).
// It is guaranteed that the sum of n
//  over all test cases does not exceed 105
// .

// Output
// For each test case, print the modified array after performing all swaps.

#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i+=2){
        swap(arr[i], arr[i-1]);
    }
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}
 
int main() {
	int testCases;
	cin>>testCases;
	
	for (int i = 0; i < testCases; i++) {
	    solve();
	}
}