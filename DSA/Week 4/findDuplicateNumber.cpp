// You have been given an integer array of size N
//  which contains numbers from 0
//  to (N−2)
// . Each number is present at least once. Among these, there is a single integer value that is present twice.

// You need to find the duplicate number present in the array.

// Input
// The first line contains a single integer t
//  (1≤t≤100)
//  — the number of test cases.

// The first line of each test case contains an integer N
//  (0≤N≤1000)
// . The second line contains N
//  integers representing the array/list.

// Output
// For each test case, print the duplicate number in the array.

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
        if(count==2){
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