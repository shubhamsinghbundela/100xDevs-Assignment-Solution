// You have been given two integer arrays of size N
//  and M
// , respectively. You need to print their intersection.

// Input
// The first line contains an integer t
//  (1≤t≤100)
//  — the number of test cases.

// For each test case: The first line contains an integer N
//  (0≤N≤1000)
// , the size of the first array. The second line contains N
//  integers. The third line contains an integer M
//  (0≤M≤1000)
// , the size of second array. The fourth line contains M
//  integers.

// Output
// For each test case, print the intersection in one line. Elements must follow the order they appear in the first array.

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;

    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    cin>>m;
    int arr2[m];

    for(int i=0; i<m; i++) cin>>arr2[i];

    int taken[m] = {false};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i] == arr2[j] and !taken[j]){
                cout<<arr2[j]<<" ";
                taken[j] = true;
                break;
            }
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

