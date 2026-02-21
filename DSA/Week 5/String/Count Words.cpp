// You are given a string S
//  consisting of English letters and spaces.

// A word is a maximal contiguous sequence of letters.

// It is guaranteed that words are separated by exactly one space, and the first character of S
//  is not a space.

// Your task is to count the number of words in S
// .

// Input
// The only line contains the string S
// .

// It is guaranteed that 1≤|S|≤105
// , and S
//  consists only of English letters and spaces.

// Output
// Print one integer — the number of words in S
// .
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    getline(cin, str);
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if(str[i]==' '){
            count++;
        }
    }
    cout<<count+1;
    
}

int main() {
	// your code goes here
	int testCases = 1;
    // cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
 
}
