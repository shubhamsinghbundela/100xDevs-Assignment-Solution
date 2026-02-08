// Given an array of integers and a value X
// , determine whether X
//  is present in the array.

// Print "YES" if it is present, otherwise print "NO".

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
// Print "YES" if X
//  is present in the array, otherwise print "NO".

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
	bool flag = false;
	for(int i = 0; i<n; i++){
	    if(arr[i]== target){
	        flag=true;
	        break;
	    }
	}
	if(flag){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
}
