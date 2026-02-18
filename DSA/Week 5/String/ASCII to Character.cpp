// You are given an integer representing the ASCII value of a character.

// Your task is to print the corresponding character.

// Input
// The only line contains an integer X
//  (33≤X≤126
// ).

// Output
// Print the character corresponding to the given ASCII value.
#include <bits/stdc++.h>

using namespace std;

void solve() {
   int number;
   cin>>number;
   
   cout<<char(number);

}

int main() {
    int testCases = 1;
    // 	cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}