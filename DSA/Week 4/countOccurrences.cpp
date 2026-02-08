// You are given an array of integers and an integer X
// .

// Find how many times X
//  appears in the array.

// Input
// First line contains two integers N
//  and X
//  (1≤N≤105,−109≤X≤109)
// .
// Second line contains N
//  integers A1,A2,…,AN
//  (−109≤Ai≤109)
// .
// Output
// Print a single integer — the number of times X
//  appears in the array.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int target;
	cin>>target;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int count = 0;
	for(int i = 0; i<n; i++){
	    if(arr[i]== target){
	        count+=1;
	    }
	}
	
	cout<<count;
}
