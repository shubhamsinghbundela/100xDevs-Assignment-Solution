// You are given two non-negative integers A
//  and B
// .

// Your task is to determine whether A!=B!
// ∗
// .

// ∗
// For a non-negative integer n
// , the factorial of n
//  is defined as n!=1⋅2⋅3⋯n
// , and by definition 0!=1
// .

// Input
// A single line containing two integers A
//  and B
// 0≤A,B≤1018

// Output
// Print Yes if A!=B!
// , otherwise print No.

#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;

    if((a == b) or (a == 0 and b == 1) or (a == 1 and b == 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

signed main()
{
    int t = 1;
    // cin >> t;

    for(int i = 1; i <= t; i++)
    {
        solve();
    }
}