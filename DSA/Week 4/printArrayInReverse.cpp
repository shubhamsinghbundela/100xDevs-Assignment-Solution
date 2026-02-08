// You are given an array of integers.

// Print the elements of the array in reverse order.

// Input
// First line contains integer N
//  (1≤N≤105)
//  — size of the array.
// Second line contains N
//  integers A1,A2,…,AN
//  (−109≤Ai≤109)
// .
// Output
// Print the elements of the array in reverse order.

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	for(int i=n-1;i>=0;i--){
	    cout<< arr[i] <<" ";
	}
 
}