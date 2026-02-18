// Lowercase, Uppercase, Digit or Special

// You are given a single character.

// Determine whether it is:

// Lowercase
// Uppercase
// Digit
// Special
// Input
// The only line contains a single character c
// .

// It is guaranteed that c
//  is a printable ASCII character (33≤
//  ASCII value of c
//  ≤126
// ).

// Output
// Print exactly one of the following:

// Lowercase
// Uppercase
// Digit
// Special

#include <bits/stdc++.h>

using namespace std;

void solve() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase";
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase";
    } else if (ch >= '0' && ch <= '9') {
        cout << "Digit";
    } else {
        cout << "Special";
    }

}

int main() {
    int testCases = 1;
    // 	cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}