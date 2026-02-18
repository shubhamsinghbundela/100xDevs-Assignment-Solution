// You are given a single character c
// .

// Print the ASCII value of c
// .

// Input
// The input contains a single character c
// .

// It is guaranteed that c
//  is a visible ASCII character (its code is between 33
//  and 126
// ).

// Output
// Print a single integer — the ASCII value of c
// .

#include <bits/stdc++.h>

using namespace std;

void solve() {
   char ch;
   cin>>ch;
   
   cout<<int(ch);

}

int main() {
    int testCases = 1;
    // 	cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}