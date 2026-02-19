// You are given a word S
//  consisting of English letters.

// For every character in the word:

// if it is lowercase, convert it to uppercase;
// if it is uppercase, convert it to lowercase.
// Input
// The only line contains a word S
// .

// It is guaranteed that 1≤|S|≤105
//  and S
//  consists only of English letters.

// Output
// Print the resulting word after toggling the case of every character.

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i++) {
	    if(s[i]>='a' && s[i]<='z'){
	        s[i]=s[i]-32;
	    }else{
	        s[i]=s[i]+32;
	    }
	}
	cout<<s;
}
