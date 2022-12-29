#include<bits/stdc++.h>
using namespace std;
bool map1[27] = {0};

void Title(string a, int k) {
	int i = 0;
	int j = a.length() - 1;

	while (i < j) {
		if (a[i] == '?' and a[j] == '?') {
			continue;
		} else if (a[i] != '?' and a[j] == '?') {
			a[j] = a[i];
			map1[a[i] - 'a' + 1] = true;
		} else if (a[j] != '?' and a[i] == '?') {
			a[i] = a[j];
			map1[a[i] - 'a' + 1] = true;
		} else if (a[i] == a[j]) {
			map1[a[i] - 'a' + 1] = true;
		} else {
			cout << "IMPOSSIBLE" << endl;
			return;
		}
		i++, j--;
	}

	//TasK: String ke upar apna kaam karliya:

	if (i == j and a[i] != '?') {
		map1[a[i] - 'a' + 1] = true;
	}

	//Extra vaali cheez;

	while (i >= 0) {
		while (k > 1 and map1[k] == true) {
			k--;
		}
		//Now i know how many extra characters are required or any
		//extra character is even required.

		if (a[i] == '?' and a[j] == '?') {
			a[i] = a[j] = 'a' + k - 1;
			map1[k] = true;
			i--;
			j++;
		} else {
			i--;
			j++;
		}
	}


	if (k == 1 and map1[k] == true) {
		cout << a << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
	}
}

// k = 2;
// ? ? ? ?


// ---> | <---

// _ _ _ <-- | -->_ _ _


int main() {
	int k;
	string s;
	cin >> k >> s;
	Title(s, k);
}



