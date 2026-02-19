// You are given an input string S
//  that contains multiple words separated by spaces. Your task is to remove all spaces from the string.

// There can be multiple spaces between or after words.

// Input
// The input consists of a single line containing the string S
//  (1≤|S|≤106)
// .

// Output
// Print the string S
//  after removing all spaces.

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	getline(cin, s);
	string newStr;
	for (int i = 0; i < s.size(); i++) {
	    if(s[i]!=' '){
	        newStr+=s[i];
	    }
	}
	cout<<newStr;
}
