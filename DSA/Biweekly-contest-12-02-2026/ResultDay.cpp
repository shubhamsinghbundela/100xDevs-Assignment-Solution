// It's the result day and you are given the marks of N
//  students in a class and the passing marks.

// A student is considered Pass if their marks are greater than or equal to the passing marks. Otherwise, the student is considered Fail.

// Your task is to count how many students passed and how many failed.

// Input
// First line contains integer N
//  (1≤N≤105)
//  — number of students.
// Second line contains N
//  integers Ai
//  (0≤Ai≤100)
//  — marks of students.
// Third line contains integer P
//  (0≤P≤100)
//  — passing marks.
// Output
// Print exactly two lines:


// Pass: X
// Fail: Y
// where:

// X = number of students who passed
// Y = number of students who failed

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int passingMarks;
	cin>>passingMarks;
	
	long long pass = 0;
	long long fail = 0;
	for(int i=0;i<n;i++){
	    if(arr[i]>=passingMarks){
	        ++pass;
	    }else{
	        ++fail;
	    }
	}
	
	cout<<"Pass: "<<pass<<endl;
	cout<<"Fail: "<<fail<<endl;
}


