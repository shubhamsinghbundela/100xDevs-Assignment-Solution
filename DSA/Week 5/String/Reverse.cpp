// You are given a string S
//  consisting only of lowercase English letters.

// Your task is to reverse the string.

// Input
// The only line contains a string S
//  (1≤|S|≤1000
// ).

// It is guaranteed that S
//  consists only of lowercase English letters.

// Output
// Print the reversed string.

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    
    string reverseStr;
    for (int i = str.size()-1; i >= 0; i--) {
        reverseStr+=str[i];
    }
    cout<<reverseStr;
}

int main() {
	// your code goes here
	int testCases = 1;
    // cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
 
}
