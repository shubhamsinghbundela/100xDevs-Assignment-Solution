// You are given a single integer n
// .

// Construct an array of length n
//  containing the integers from 1
//  to n
//  (each exactly once) in the following order:

// 1,3,5,…
//  (increasing order from the left)
// 2,4,6,…
//  (decreasing order from the right)
// Input
// The first line contains a single integer t
//  (1≤t≤100
// ) — the number of test cases.

// Each of the next t
//  lines contains a single integer n
//  (1≤n≤104
// ).

// Output
// Print n
//  integers — the required array.

#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int left = 0;
    int right = n-1;
    int num = 1;
    while(left<=right){
        if(num%2 == 0){
           arr[right]=num; 
           right--;
        }else{
            arr[left]=num;
            left++;
        }
        num++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}
 
int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	for(int i=0;i<testCases;i++){
	    solve();
	}
}