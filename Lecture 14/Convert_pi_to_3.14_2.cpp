#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

string Solve2(string s) {

	if (s.length() == 0 or s.length() == 1) {
		return s;
	}


	if (s[0] == 'p' and s[1] == 'i') {
		return "3.14" + Solve2(s.substr(2));
	} else {
		return s[0] + Solve2(s.substr(1));
	}
}

int main() {
	string s;
	cin >> s;
	cout << Solve2(s) << endl;
}

//Kyuki string  are not passed by reference:

// pi ii pi

// 3.14+    (iipi):


// 	(iipi):s[0] = i

// Bubble sort: