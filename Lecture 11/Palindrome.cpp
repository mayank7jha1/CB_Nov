#include<bits/stdc++.h>
using namespace std;


int main() {
	string s;
	cin >> s;

	string t;
	t = s;
	//STL:
	reverse(s.begin(), s.end());

	// for (int i = 0; i < s.length(); i++) {
	// 	cout << s[i];
	// }
	// cout << endl;
	// cout << s << endl;

	if (t == s) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	//Reverse Karne ka matlab kya hota hain?

	int i = 0;
	int j = s.length() - 1;

	while (i < j) {
		if (s[i] != s[j]) {
			cout << "False" << endl;
			return 0;
		}
		i++;
		j--;
	}

	cout << "Yes" << endl;

}


//String STL: COntainers ko aap directly compare kar sakte ho.


//Palindrome: If a number/String when reversed is same, that number/string
//is a palindrome.
