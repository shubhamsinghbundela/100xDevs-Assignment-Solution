// You are given a string s
//  consisting of lowercase English letters, and two characters c1
//  and c2
// .

// Your task is to replace every occurrence of c1
//  in the string s
//  with c2
//  and print the resulting string.

// Input
// The first line contains a non-empty string s
//  (1≤|s|≤106
// ). The second line contains two lowercase English letters c1
//  and c2
// , separated by a space.

// Output
// Print the required string.

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	char c1;
	char c2;
	cin>>s>>c1>>c2;
	for(int i=0;i<s.size();i++){
	    if(s[i]==c1){
	        s[i]=c2;
	    }
	}
	cout<<s;
}
