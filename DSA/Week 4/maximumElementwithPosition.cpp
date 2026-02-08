// Given an array of integers, find the maximum element in the array and its position.

// If multiple maximum elements exist, print the position of the first occurrence.

// Input
// First line contains integer N
//  (1≤N≤105)
//  — size of the array.
// Second line contains N
//  integers A1,A2,…,AN
//  (−109≤Ai≤109)
// .
// Output
// Print two integers: the maximum element and its 1-based position in the array.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int max = arr[0];
	int location = 1;
	for(int i=1;i<n;i++){
	    if(arr[i]>max){
	        max=arr[i];
	        location=i+1;
	    }
	}
	
	cout<<max<<" "<<location;
	

}
