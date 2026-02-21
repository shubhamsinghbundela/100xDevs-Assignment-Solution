// You are given a string S
//  consisting only of lowercase English letters.

// A string is called a palindrome if it reads the same from left to right and from right to left.

// Determine whether S
//  is a palindrome.

// Input
// The only line contains a string S
//  (1≤|S|≤1000
// ).

// It is guaranteed that S
//  consists only of lowercase English letters.

// Output
// Print YES if S
//  is a palindrome, otherwise print NO.

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    
    string reverseStr;
    for (int i = str.size()-1; i >= 0; i--) {
        reverseStr+=str[i];
    }
    if(str == reverseStr){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main() {
	// your code goes here
	int testCases = 1;
    // cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
 
}
