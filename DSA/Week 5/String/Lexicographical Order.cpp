// You are given two words A
//  and B
// .

// A word A
//  is said to come before B
//  in lexicographical order (dictionary order) if:

// at the first position where they differ, A
//  has a smaller character than B
// , or
// A
//  is a prefix of B
//  and A≠B
// .
// Determine which word appears first in the dictionary.

// Input
// The first line contains a word A
// .

// The second line contains a word B
// .

// Both words contain only lowercase English letters and have length from 1
//  to 1000
// .

// Output
// Print A if A
//  comes before B
// .
// Print B if B
//  comes before A
// .
// Print Equal if A=B
// .

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str1;
    string str2;
    cin>>str1>>str2;
    if(str1<str2){
        cout<<"A";
    }else if(str2<str1){
        cout<<"B";
    }else{
        cout<<"Equal";
    }
    

}

int main() {
    int testCases = 1;
    // 	cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}