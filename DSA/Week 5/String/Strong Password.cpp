// You are given a password.

// A password is considered strong if all of the following conditions are satisfied:

// It consists of exactly 10
//  characters.
// It contains at least one lowercase English letter.
// It contains at least one uppercase English letter.
// It contains at least one digit.
// It contains at least one special character.
// Any character that is not a lowercase letter, uppercase letter, or digit is considered a special character.

// Input
// The only line contains a string S
// .

// It is guaranteed that 1≤|S|≤100
//  and all characters are printable ASCII characters.

// Output
// Print Strong if the password is strong. Otherwise, print Weak.

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    
    int stringSize = str.size();
    int lowerCaseCount = 0;
    int upperCaseCount = 0;
    int digitCount = 0;
    int specialCharacterCount = 0;
    for (int i = 0; i < stringSize; i++) {
        if(str[i]>='a' && str[i]<='z'){
            lowerCaseCount++;
        }else if(str[i]>='A' && str[i]<='Z'){
            upperCaseCount++;
        }else if(str[i]>='0' && str[i]<='9'){
            digitCount++;
        }else{
            specialCharacterCount++;
        }
    }
    
    if(stringSize==10 && lowerCaseCount>=1 && upperCaseCount>=1 && digitCount>=1 && specialCharacterCount>=1){
        cout<<"Strong";
    }else{
        cout<<"Weak";
    }
}

int main() {
	// your code goes here
	int testCases = 1;
    // cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        solve();
    }
 
}


