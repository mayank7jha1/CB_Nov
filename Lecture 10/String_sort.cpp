#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool compare(string x, string y) {
	if (x.find(y) == 0 or y.find(x) == 0) {
		if (x.length() > y.length()) {
			return true;//STL kuch nahi karna
		} else {
			return false;//Swap kardo.
		}
	}
	/*String me aap direct comparison kar sakte ho.
	Jaise numbers ko karte hain. Compare karta hain
	on the basis of ascii value.*/

	if (x < y) {
		return true;//Kuch nahi karna
	} else {
		return false; //Swap kardo.
	}
}

int main() {
	int n;
	cin >> n;

	//Aapke pass n strings hain:
	//Aaapke pass ek array of string hain.


	// Aapke pass ek 2 d array kind of structure hain.
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare); //Dictionary

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
}

//Batman
//Bat