#include<bits/stdc++.h>
using namespace std;

string s;
char x, y;
// Leetcode:
void Replace(int i) {

	if (i > s.length() - 1) {
		return;
	}


	if (s[i] == x) {
		// ith character in s check kiya hain x se.
		s[i] = y;
	}

	Replace(i + 1);
}

int main() {
	//string s;
	cin >> s;
	//string s ke ander x ko replace kardo with y.
	cin >> x >> y;

	Replace(0);
	cout << s << endl;
}


//Code Efficient: Nahi string container:
//scope: function ki call khatam hogi toh string (X).
// space complexity: n strings bana rahe ho.
//C++: Reference Variable:

//Reference address par kaam kar raho.