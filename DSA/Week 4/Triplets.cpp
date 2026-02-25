// You have been given an integer array of size N
//  and a number X
// . Find the total number of triplets in the array which sum to X
// .

// Two triplets are considered different if they involve different indices of the array, even if the values are the same.

// Input
// 1≤t≤50
// 0≤N≤102
// 0≤X≤109
// Output
// Print the number of triplets.

#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int number;
    cin>>number;
    int count = 0;
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                if((arr[i]+arr[j]+arr[k])==number){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
 
int main() {
    int testCases;
    cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}