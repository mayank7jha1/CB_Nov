#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	// string s;//This is your single string
	// cin >> s;

	int n;
	cin >> n;
	string t[100];//THis is your array of strings
	//Here in order for you to take input you have to take input as arrays.


	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}

	//Here t[i]:: Represents a single string
	//t[i][i]: this represents the ith character of the ith string.

	//cout << s << endl;
	//cout << s[2] << endl;

	cout << t << endl;
	cout << t[2] << endl;
	cout << t[2][2] << endl;
}