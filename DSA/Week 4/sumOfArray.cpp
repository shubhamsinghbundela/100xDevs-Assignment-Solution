// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/B

// You are given an array of integers.

// Find the sum of all elements of the array.

// Input
// First line contains integer N
//  (1≤N≤105)
//  — size of the array.
// Second line contains N
//  integers A1,A2,…,AN
//  (−109≤Ai≤109)
// .
// Output
// Print a single integer — the sum of the array elements.


#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int arr[n];
	long long sum = 0;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    sum+=arr[i];
	}
	
	cout<<sum;
}