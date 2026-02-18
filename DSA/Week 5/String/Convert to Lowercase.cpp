// You are given a single English alphabet character.

// Your task is to convert it to lowercase.

// Input
// The only line contains a single character c
// .

// It is guaranteed that c
//  is an English alphabet letter (A≤c≤Z
//  or a≤c≤z
// ).

// Output
// Print the lowercase version of the given character.

#include <bits/stdc++.h>

using namespace std;

void solve() {
    char ch;
    cin >> ch;
    if(ch>='A' && ch<='Z'){
        cout<<char(ch+32);
    }else{
        cout<<ch;
    }
    

}

int main() {
    int testCases = 1;
    // 	cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
}