// In an Olympic race, there are N
//  runners numbered from 1
//  to N
// .

// You are given the time taken by each runner to complete the race.

// The runner with the minimum time is considered the fastest.

// If multiple runners have the same fastest time, choose the runner with the larger ID.

// Input
// First line contains integer N
//  (1≤N≤105)
// .

// Second line contains N
//  integers T1,T2,…,TN
//  where
// 1≤Ti≤109
// represents the time taken by the i
// -th runner.

// Output
// Print a single integer — the ID of the fastest runner.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	int location=1;
	int min=arr[0];
	for(int i=1;i<n;i++){
	    if(arr[i]<=min){
	        min=arr[i];
	        location= i+1;
	    }
	}
	cout<<location;
}
