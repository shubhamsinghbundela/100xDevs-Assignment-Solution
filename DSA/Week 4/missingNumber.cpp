// You are given an integer array of size n
// , where n=2m+1
// .

// In this array, exactly m
//  numbers appear twice, and exactly one number appears only once. Your task is to find and return that unique number.

// Input
// The first line contains an integer t
//  (1≤t≤100
// ) — the number of test cases.

// Each test case consists of two lines:

// The first line contains a single integer n
//  (1≤n≤1000
// , n
//  is always odd).
// The second line contains n
//  integers a1,a2,…,an
//  (1≤ai≤106
// ) — the elements of the array.
// It is guaranteed that in each test case there is exactly one element that appears once, and all others appear exactly twice.

// Output
// For each test case, print a single integer, the unique element.

#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        int target = arr[i];
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                count++;
            }
        }
        if(count==1){
            cout<<target;
            break;
        }
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