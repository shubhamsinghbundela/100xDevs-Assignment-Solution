// You are given an array of integers. Find the minimum element in the array and its position.

// If multiple positions contain the minimum value, print the smallest position.

// Input
// First line contains integer N
//  (1≤N≤105)
//  — size of the array.
// Second line contains N
//  integers A1,A2,…,AN
//  (−109≤Ai≤109)
// .
// Output
// Print two integers — the minimum value and its position (1-based index).

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int min = arr[0];
	int location = 1;
	for(int i=1;i<n;i++){
	    if(arr[i]<min){
	        min=arr[i];
	        location=i+1;
	    }
	}
	
	cout<<min<<" "<<location;
	

}
