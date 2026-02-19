// You are given a string s
//  consisting of lowercase English letters, and a character x
// .

// Your task is to remove all occurrences of x
//  from the string s
//  and print the resulting string.

// Input
// The first line contains a string s
//  (1≤|s|≤106
// ). The second line contains a single lowercase English letter x
// .

// Output
// Print the string obtained after removing all occurrences of x
//  from s
// .

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	char c;
	cin>>s>>c;
	string newStr = "";
	for (int i = 0; i < s.size(); i++) {
	    if(s[i]!=c){
	        newStr+=s[i];
	    }
	}
	cout<<newStr;
}
